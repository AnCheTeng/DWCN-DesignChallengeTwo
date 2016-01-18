/******************** (C) COPYRIGHT 2015 NXG Lab ******************************
* File Name          : autonetAPI.h
* Author             : AutoNet team
* Version            : V1.0.0.0
* Date               : 08/04/2015
* Description        : Header for autonetAPIs
*******************************************************************************/
/* Define to prevent recursive inclusion ------------------------------------ */
#ifndef __AUTONET_API_H
#define __AUTONET_API_H

#ifdef __cplusplus
 extern "C" {
#endif

	 
/* Includes ------------------------------------------------------------------*/
#include <string.h>
#include <stdlib.h>
#include "st.h"
#include "i2c.h"
#include "spi.h"
#include "com.h"
#include "config.h"
#include "math.h"
#include "TxRx.h"
#include "sensor.h"
#include "stm32f0xx_it.h"
#include "parameter.h"
#include "us2400APIs.h"
#include "gpio.h"
#include "st.h"

/* Private define ------------------------------------------------------------*/
#define MODEL_FCM2401
/* Structure definition ------------------------------------------------------*/
enum RECEVIE_DATA_TABLE
{
		ATTRIBUTE_HEADING,
		ATTRIBUTE_SPEED,
		ATTRIBUTE_TMP,
		ATTRIBUTE_BRIGHTNESS,
		ATTRIBUTE_GPS_LAT_DEG,
		ATTRIBUTE_GPS_LAT_MIN,
		ATTRIBUTE_GPS_LAT_SEC,	
		ATTRIBUTE_GPS_LAT_DIR,
		ATTRIBUTE_GPS_LONG_DEG,
		ATTRIBUTE_GPS_LONG_MIN,
		ATTRIBUTE_GPS_LONG_SEC,	
		ATTRIBUTE_GPS_LONG_DIR,
    ATTRIBUTE_NUM
};

typedef struct{
	uint16_t type;
	uint16_t address;
	uint16_t Rssi;
	uint16_t attribute[ATTRIBUTE_NUM];
}Device;

typedef struct{
  Device device[NumOfDeviceInTable];
}Table;

typedef struct{
	int heading;
	float tmp;
	int brighness;
}ReadableDevice;

typedef struct{
	ReadableDevice device[NumOfDeviceInTable];
}ReadableTable;

typedef struct{
	uint16_t type;
	uint16_t address;
	// TODO: to modify as timer to 
	uint8_t count;
}IRDevice;

typedef struct{
  IRDevice IRdevice_1[NumOfDeviceInTable];
	IRDevice IRdevice_2[NumOfDeviceInTable];
}IRTable;
	 
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

/* Configuration */
void Initial(uint16_t, uint8_t, uint8_t, uint16_t);
void Init(uint16_t, uint8_t);
void TimerBeaconSetting(void);
void Autonet_search_type(char *a);
void update_group_info(void);

uint8_t GroupByType(uint16_t* ID, uint8_t type);
uint8_t getDeviceByRSSI(uint16_t* ID,uint8_t min, uint8_t max);
uint16_t getChannelCenterFreq(uint8_t);

/* */
void packet_receive(void);
void IR_receive(int);
void broadcastSend(void);
void broadcast(void);
void lightingSend(void);
void commandSend(void);
void Group_Configuration(void);
uint8_t Group_Diff(uint16_t*, uint16_t*, uint8_t, float, float);
uint8_t Group_Distance(uint16_t* ID, float distance);

/* Inner Table Processing */
uint16_t ScanTableByAddress(uint16_t);
uint16_t ScanIRTableByAddress(uint16_t,int);
void update_sensor_table(void);
void setTable(uint8_t,uint16_t,uint8_t,uint8_t);
void setIRTable(uint8_t,uint16_t,uint8_t,int);
void RemoveDeviceFromTable(int);
void RemoveDeviceFromIRTable(int,int);
void ResetDeviceTimerInTable(int);
void ResetCountIRTable(uint8_t n,int);
void UpdateIRTable(void);
void IR_BufferClean(void);

/* get messages from received frames */
void getSrcAddr(uint8_t* data_out, uint8_t* data_in);
void getDestAddr(uint8_t* data_out, uint8_t* data_in);
void getSrcPanID(uint8_t* data_out, uint8_t* data_in);
void getDestPanID(uint8_t* data_out, uint8_t* data_in);
void getSeqNum(uint8_t* data_out, uint8_t* data_in);
void getFrameControl(uint8_t* data_out, uint8_t* data_in);
void getPayload(uint8_t* data_out, uint8_t* data_in, uint8_t Data_Length);
void getPayloadLength(uint8_t* data_out, uint8_t* data_in);
void data_fetch(uint8_t* data_out, uint8_t* data_in, uint8_t d_offset, uint8_t d_length);

#ifdef __cplusplus
}
#endif

#endif /* __AUTONET_API_H */

