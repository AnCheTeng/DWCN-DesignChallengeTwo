/******************** (C) COPYRIGHT 2009 U-PEC Electronics Corp. ***************
* File Name          : mag3110APIs.h
* Author             : Ethan Chung
* Version            : V1.0.0.0
* Date               : 03/07/2009
* Description        : Header for MAG3110
*******************************************************************************/
/* Define to prevent recursive inclusion ------------------------------------ */
#ifndef __MAG3110_API_H
#define __MAG3110_API_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
/********************** I2C Address Setting ************************************
                 I2C Slave ID (HEX W/R)  Comments
                 0x1C                    0001110 0/1
*******************************************************************************/

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
/*******************************************************************************
* Function Name  : Mag3110Init
* Description    : Initializes peripherals used by the Temperature Sensor driver.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void Mag3110Init(unsigned char DevID);

/*******************************************************************************
* Function Name  : Mag3110ReadMag
* Description    : Read Mag.
* Input          : None
* Output         : - Temperature: Temperature from Temperature Senson.
* Return         : None
*******************************************************************************/
void Mag3110ReadMag(unsigned char DevID, short *pMagX, short *pMagY, short *pMagZ);

/*******************************************************************************
* Function Name  : MAG3110 Read Temperature
* Description    : Read Temperature from the Temperature Sensor driver.
* Input          : None
* Output         : - Temperature: Temperature from Temperature Senson.
* Return         : None
*******************************************************************************/
void Mag3110ReadTemp(unsigned char DevID, char *pTemp);

#ifdef __cplusplus
}
#endif

#endif /* __MAG3110_API_H */

