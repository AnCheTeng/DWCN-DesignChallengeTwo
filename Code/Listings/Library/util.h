/******************** (C) COPYRIGHT 2015 NTU NXG LAB  **************
* File Name          : gpio.h
* Author             : Ed Kung
* Version            : v1.0.0
* Date               : 16-Sep-2015
* Description        : 
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __UTIL_H
#define __UTIL_H

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
uint8_t Array_Intersection(uint16_t*, uint16_t* , uint8_t , uint16_t* , uint8_t);
uint8_t Array_Union(uint16_t* , uint16_t* , uint8_t , uint16_t* , uint8_t);
	
#ifdef __cplusplus
}
#endif

#endif /* __UTIL_H */

/******** (C) COPYRIGHT 2015 NTU NXG LAB ******END OF FILE********/
