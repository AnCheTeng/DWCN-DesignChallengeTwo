/******************** (C) COPYRIGHT 2009 U-PEC Electronics Corp. ***************
* File Name          : tmp75APIs.h
* Author             : Ethan Chung
* Version            : V1.0.0.0
* Date               : 04/11/2014
* Description        : Header for TMP75
*******************************************************************************/
/* Define to prevent recursive inclusion ------------------------------------ */
#ifndef __TMP75_API_H
#define __TMP75_API_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>
	 /********************** I2C Address Setting ************************************
  A2  A1  A0    I2C Slave ID (HEX W/R)  Comments
  0   0   0     0x90/0x91               1001000 0/1
  0   0   1     0x92/0x93               1001001 0/1
  0   1   0     0x94/0x95               1001010 0/1
  0   1   1     0x96/0x97               1001011 0/1
  1   0   0     0x98/0x99               1001100 0/1
  1   0   1     0x9A/0x9B               1001101 0/1
  1   1   0     0x9C/0x9D               1001110 0/1
  1   1   1     0x9E/0x9F               1001111 0/1
*******************************************************************************/

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
/*******************************************************************************
* Function Name  : TMP75_Init
* Description    : Initializes peripherals used by the Temperature Sensor driver.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void Tmp75Init(unsigned char DevID);

/*******************************************************************************
* Function Name  : TMP75_ReadTemperature
* Description    : Read Temperature from the Temperature Sensor driver.
* Input          : None
* Output         : - Temperature: Temperature from Temperature Senson.
*                  - Index: Sensor index, maxium is TMP_NUM_INSTANCES.
* Return         : None
*******************************************************************************/
void Tmp75ReadTemperature(unsigned char DevID, uint16_t *pTemperature);
#ifdef __cplusplus
}
#endif

#endif /* __TMP75_API_H */

