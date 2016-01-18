/******************** (C) COPYRIGHT 2009 U-PEC Electronics Corp. ***************
* File Name          : bh1750fviAPIs.h
* Author             : Ethan Chung
* Version            : V1.0.0.0
* Date               : 04/11/2014
* Description        : Header for BH1750FVI
*******************************************************************************/
/* Define to prevent recursive inclusion ------------------------------------ */
#ifndef __BH1750FVI_API_H
#define __BH1750FVI_API_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
/********************** I2C Address Setting ************************************
                I2C Slave ID (HEX W/R)  Comments
                0x46                    0100011 0/1
*******************************************************************************/

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
/*******************************************************************************
* Function Name  : BH1750FVI_Init
* Description    : Initializes peripherals used by the Light Sensor driver.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void Bh1750fviInit(unsigned char DevID);

/*******************************************************************************
* Function Name  : Bh1750fviReadLx
* Description    : Read Lux from the Light Sensor driver.
* Input          : None
* Output         : - Temperature: Temperature from Temperature Senson.
*                  - Index: Sensor index, maxium is TMP_NUM_INSTANCES.
* Return         : None
*******************************************************************************/
void Bh1750fviReadLx(unsigned char DevID, unsigned short *pLx);

#ifdef __cplusplus
}
#endif

#endif /* __BH1750FVI_API_H */

