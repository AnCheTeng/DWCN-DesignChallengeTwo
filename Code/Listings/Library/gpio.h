/******************** (C) COPYRIGHT 2015 NTU NXG LAB  **************
* File Name          : gpio.h
* Author             : Ed Kung
* Version            : v1.0.0
* Date               : 16-Sep-2015
* Description        : 
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __GPIO_H
#define __GPIO_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <string.h>
#include <stdlib.h>
#include "st.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void setGPIO(uint8_t pin_idx, uint8_t state);
uint8_t getGPIO(uint8_t pin_idx);
void GPIO_ON(uint8_t n);
void GPIO_OFF(uint8_t n);
void blink(uint8_t n);
	
#ifdef __cplusplus
}
#endif

#endif /* __GPIO_H */

/******** (C) COPYRIGHT 2015 NTU NXG LAB ******END OF FILE********/
