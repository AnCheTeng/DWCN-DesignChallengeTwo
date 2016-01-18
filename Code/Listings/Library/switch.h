/******************** (C) COPYRIGHT 2015 NTU NXG LAB  **************
* File Name          : switch.h
* Author             : Ed Kung
* Version            : v1.0.0
* Date               : 16-Sep-2015
* Description        : 
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __SWITCH_H
#define __SWITCH_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <string.h>
#include <stdlib.h>
#include "autonetAPIs.h"
#include "st.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
uint8_t getSwitchState(void);
uint8_t getOnOffDeviceState(void);
void setOnOffDeviceState(uint8_t);
void toggleDeviceState(uint8_t);

#ifdef __cplusplus
}
#endif

#endif /* __SWITCH_H */

/******** (C) COPYRIGHT 2015 NTU NXG LAB ******END OF FILE********/

