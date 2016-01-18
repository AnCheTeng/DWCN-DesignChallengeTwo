#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include "autonet.h"

#define TABLE_LENGTH 24
#define Device_ID 0x0809

void DesignChallengeOneProtocol(void);
void lightLED(uint8_t);


int main(void)
{
	DesignChallengeOneProtocol();
}

void DesignChallengeOneProtocol(void){
	uint8_t Rx_msg[TABLE_LENGTH]={0};
	uint8_t Tx_msg[TABLE_LENGTH]={0};
	uint8_t Tx_length = TABLE_LENGTH;

  uint8_t rcvd_length;
	uint8_t rcvd_rssi;
	uint8_t payload[TABLE_LENGTH]={0};
	uint8_t payload_length = TABLE_LENGTH;

	uint8_t ID = 1;
	uint8_t Table[TABLE_LENGTH]={0};
	uint8_t IDindex;
	uint8_t State = 0;
	uint8_t TableFullCheck;
	uint8_t i;
	uint8_t External_Msg;
	uint8_t triggered = 0;
	uint8_t Warning_State = 0;
	
	uint8_t Type;
	uint16_t Addr;
	uint8_t radio_channel;
	uint16_t radio_panID;
	
	Type = Type_Light;
	Addr = Device_ID;
	radio_channel = 25;
	radio_panID = 0x0008;

	Initial(Addr,Type, radio_channel, radio_panID);
	setTimer(1,100,UNIT_MS);
	setTimer(2,3000,UNIT_MS);

	//===================================Network COnfiguration===================================
	// Sensing for other's information

	while(1){

		// If sense some ID greater than itself
		if(RF_Rx(Rx_msg,&rcvd_length,&rcvd_rssi)){
			getPayloadLength(&payload_length,Rx_msg);
			getPayload(payload,Rx_msg,payload_length);
			if(payload[1]==100){
				if(payload[0]+1>ID){
					ID = payload[0]+1;
				}
			}
		}
		
		// If timeout reached, stop sensing and close the timer 1 and 2
		if(checkTimer(2)) {
			setTimer(1,0,UNIT_MS);
			setTimer(2,0,UNIT_MS);
			break;
		}
	}
	
	// Light the LED for ID times
	lightLED(ID);
	
	// If ID is not 7, broadcast self-ID
	if(ID!=7){
		
		setTimer(1,100,UNIT_MS);
		while(1){
			
			// Broadcast self-ID
			if(checkTimer(1)){
				Tx_msg[0] = ID;
				Tx_msg[1] = 100;
				RF_Tx(0xffff,Tx_msg,Tx_length);
			}
		
			// If received greater ID number, stop broadcasting
			if(RF_Rx(Rx_msg,&rcvd_length,&rcvd_rssi)){
				getPayloadLength(&payload_length,Rx_msg);
				getPayload(payload,Rx_msg,payload_length);
				if(payload[1]==100){
					if(payload[0]>ID){
						break;
					}
				}
			}
		}	
	} else if(ID==7){
		setTimer(1,100,UNIT_MS);
		setTimer(2,3000, UNIT_MS);
		while(1){
			if(checkTimer(1)){
				Tx_msg[0] = ID;
				Tx_msg[1] = 100;
				RF_Tx(0xffff,Tx_msg,Tx_length);
			}
			if(checkTimer(2)) {
				setTimer(1,0,UNIT_MS);
				setTimer(2,0,UNIT_MS);
				break;
			}
		}
	}
	
	// Stop broadcasting and turn on the empty Table flag
	setGPIO(1,1);
	
	//===================================Network COnfiguration===================================

	
	
	
	
	//====================================Many-to-One Routing====================================

	// Initiate the Table
	IDindex = (ID-1)*3;
	Table[IDindex]=ID;
	Table[IDindex+1]=Addr>>8;
	Table[IDindex+2]=Addr;

	
	setTimer(1,200,UNIT_MS);

	while(1){
		
	// ======================================Pre-processor======================================
		// Receive packet
		if(RF_Rx(Rx_msg,&rcvd_length,&rcvd_rssi)){
			getPayloadLength(&payload_length,Rx_msg);
			getPayload(payload,Rx_msg,payload_length);		
			// Filter out the configuration packet

		}
		
		if(payload[1]==100){
			payload[0]=0;
			payload[1]=0;
			continue;
		}
			
		// If received Alert/Reset packet, refine the payload
		if(payload[0]==8){
			External_Msg=payload[1];
			for(i=0; i<TABLE_LENGTH; i++){
				payload[i]=0;
			}
			// External_Msg=0: Alert message; External_Msg=2: Reset message
			payload[21]=8;
			payload[22]=External_Msg;
			payload[23]=8;
		}
		
		
		if(payload[21]==8){
			// When waiting for Reset/Alert, filter out unrelated packet
			if(Warning_State==0 && payload[22]!=0){
				for(i=0; i<TABLE_LENGTH; i++){
					payload[i]=0;
				}
				continue;
			}else if(Warning_State==1 && payload[22]!=2){
				for(i=0; i<TABLE_LENGTH; i++){
					payload[i]=0;
				}
				continue;
			}
			Table[21]=8;
			Table[22]=payload[22];
			Table[23]=8;
		}
		
	// ======================================Pre-processor======================================
	
		if(State==0){
			// State-0: Process before the limited Table is full
			
			// If received packet doesn't contain self-ID and device has not been triggered
			if(triggered==0){
				for(i=0; i<8; i++){
					// If received trigger message, broadcast Table once
					if(payload[i*3]!=0 && payload[i*3]>ID){
						RF_Tx(0xffff,Table,Tx_length);
						triggered=1;
						if(ID==1){
							State = 1;
							setGPIO(1,0);
						}
						break;
					}
				}
			} else if (triggered==1 && checkTimer(1)){
			// Rebroadcast the Table	
				RF_Tx(0xffff,Table,Tx_length);
			}

			// Check received Table and store the message received
			TableFullCheck = 0;
			for(i=0; i<ID-1; i++){
				if(payload[i*3+1]!=0 || payload[i*3+2]!=0){
					Table[i*3]=payload[i*3];
					Table[i*3+1]=payload[i*3+1];
					Table[i*3+2]=payload[i*3+2];
				}
				
				//Check if the limited Table is full or not
				if(Table[i*3]==0){
					TableFullCheck++;
				}
			}
			
			// If limited Table is full
			if(TableFullCheck==0){
				if(ID==7){
					// Entering the next state and broadcast real full Table
					State = 1;
					setGPIO(1,0);	
				} else if(ID!=1){
					// Entering the next state and waiting for real full Table
					RF_Tx(0xffff,Table,Tx_length);
					State = 1;
					setGPIO(1,0);	
				}
			}
			
		} else {
			// State-1: Process after the limited Table is full

			if(ID==7){
				//if(Table[21]==0){
				//	continue;
				//}
				RF_Tx(0xffff,Table,Tx_length);
				lightLED(ID);
				// Remaining: broadcast confirmation message
				if(Warning_State==0){
					if(Table[22]==0){
						Tx_msg[1] = 1;
					}
				
					for(i=1; i<8; i++){
						Tx_msg[0] = i;
						RF_Tx(0xffff,Tx_msg,2);
						Delay(100);
					}
					
					Warning_State=1;
				} else {
					Warning_State=0;
				}
				
				// Clean up the Table
				RF_Tx(0xffff,Table,Tx_length);
				for(i=0; i<TABLE_LENGTH; i++){
					Table[i]=0;
					payload[i]=0;
				}
				
				// Initiate the Table
				Table[IDindex]=ID;
				Table[IDindex+1]=Addr>>8;
				Table[IDindex+2]=Addr;
				
				State = 0;
				triggered = 0;
				Delay(1000);
				setGPIO(1,1);	
				
			} else {
				// Check received Table and store the message received
				
				if (checkTimer(1)){
				// Rebroadcast the Table	
					RF_Tx(0xffff,Table,Tx_length);
				}
				
				TableFullCheck = 0;
				for(i=0; i<8; i++){
					if((payload[i*3+1]!=0 || payload[i*3+2]!=0)&&Table[i*3]==0){
						Table[i*3]=payload[i*3];
						Table[i*3+1]=payload[i*3+1];
						Table[i*3+2]=payload[i*3+2];
					}
				
					//Check if Table is full or not
					if(Table[i*3]==0){
						TableFullCheck++;
					}
				}
			
				// If real Table is full
				if(TableFullCheck==0){
					RF_Tx(0xffff,Table,Tx_length);
					lightLED(ID);
          // Remaining: broadcast confirmation message
          if(Warning_State==0){
            if(Table[22]==0){
              Tx_msg[1] = 1;
            }

            for(i=1; i<8; i++){
              Tx_msg[0] = i;
              RF_Tx(0xffff,Tx_msg,2);
              Delay(100);
            }
            
            Warning_State=1;
          } else {
            Warning_State=0;
          }

          // Clean up the Table
          RF_Tx(0xffff,Table,Tx_length);
          for(i=0; i<TABLE_LENGTH; i++){
            Table[i]=0;
						payload[i]=0;
          }

          // Initiate the Table
          Table[IDindex]=ID;
          Table[IDindex+1]=Addr>>8;
          Table[IDindex+2]=Addr;

          State = 0;
          triggered = 0;
					Delay(1000);
					setGPIO(1,1);	
				}
			}
		}
	}
	//====================================Many-to-One Routing====================================
}


// Light the LED for ID times
void lightLED(uint8_t ID){
	uint8_t i=0;
	uint8_t Tx_msg[TABLE_LENGTH]={0};
	uint8_t Tx_length = TABLE_LENGTH;
	Tx_msg[1] = 100;
	for(i=0; i<ID; i++){
		setGPIO(1,1);
		Delay(200);
		
		Tx_msg[0] = ID;
		
		RF_Tx(0xffff,Tx_msg,Tx_length);
		
		setGPIO(1,0);
		Delay(200);
		
		RF_Tx(0xffff,Tx_msg,Tx_length);
	}
}
