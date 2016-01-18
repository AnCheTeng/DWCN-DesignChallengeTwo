/******************** (C) COPYRIGHT 2009 U-PEC Electronics Corp. ***************
* File Name          : lea6sAPIs.h
* Author             : Ethan Chung
* Version            : V1.0.0.0
* Date               : 04/11/2014
* Description        : Header for LEA6S
*******************************************************************************/
/* Define to prevent recursive inclusion ------------------------------------ */
#ifndef __LEA6S_API_H
#define __LEA6S_API_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
/********************** I2C Address Setting ************************************
                I2C Slave ID (HEX W/R)  Comments
                0x84                    1000010 0/1
*******************************************************************************/

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
/*******************************************************************************
* Function Name  : LEA6S_Init
* Description    : Initializes peripherals used by the Temperature Sensor driver.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void Lea6SInit(unsigned char DevID);

/*******************************************************************************
* Function Name  : LEA6S_Read
* Description    : Read Temperature from the Temperature Sensor driver.
* Input          : None
* Output         : - Temperature: Temperature from Temperature Senson.
*                  - Index: Sensor index, maxium is TMP_NUM_INSTANCES.
* Return         : None
*******************************************************************************/
//void Lea6SRead(unsigned char DevID, int *pLatitude, int *pLongitude, int *pHour, int *pMinute);
unsigned char Lea6SRead_C(unsigned char DevID, unsigned char *cLatitude, unsigned char *cLongitude);
unsigned char Lea6SRead(unsigned char DevID, unsigned char *Lat_deg, unsigned char *Lat_min, unsigned char *Lat_sec, unsigned char *Long_deg, unsigned char *Long_min, unsigned char *Long_sec, unsigned char *Lat_dir, unsigned char *Long_dir);

//void GPStoInt(unsigned char *Lat, unsigned char *Long, unsigned char *pos1, unsigned char *pos2, unsigned int *Lat_deg, unsigned int *Lat_min, unsigned int *Lat_sec, unsigned int *Long_deg, unsigned int *Long_min, unsigned int *Long_sec);
void GPStoInt(unsigned char *Lat, unsigned char *Long);

#ifdef __cplusplus
}
#endif

#endif /* __LEA6S_API_H */

