/******************** (C) COPYRIGHT 2015 NTU NXG LAB  **************
* File Name          : autonet.h
* Author             : Ed Kung
* Version            : v1.0.0
* Date               : 16-Sep-2015
* Description        : 
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __AUTONET_H
#define __AUTONET_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_it.h"
#include "us2400APIs.h"
#include "st.h"
#include "com.h"
#include "TxRx.h" 
#include "autonetAPIs.h"
#include "mpu6050APIs.h"
#include "ak8975APIs.h"
#include "lea6sAPIs.h"
#include "tmp75APIs.h"
#include "mcp2120APIs.h"
#include "bh1750fviAPIs.h"
#include "mag3110APIs.h"
#include "parameter.h"
#include "switch.h"
#include "gpio.h"

#define UNIT_MS 0
	 
enum{
		Message_Control,
		Message_Type,
};

enum{
		Type_Light = 0x01,
		Type_Switch = 0x02,
};	
#ifdef __cplusplus
}
#endif

#endif /* __AUTONET_H */

/******** (C) COPYRIGHT 2015 NTU NXG LAB ******END OF FILE********/
