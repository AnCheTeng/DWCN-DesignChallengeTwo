/******************** (C) COPYRIGHT 2015 NTU NXG LAB  **************
* File Name          : config.h
* Author             : AutoNet Team
* Version            : v1.0.0
* Date               : 21-Sep-2015
* Description        : 
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __SENSOR_H
#define __SENSOR_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <string.h>
#include <stdlib.h>
#include "stm32f0xx_gpio.h"
#include "mpu6050APIs.h"
#include "ak8975APIs.h"
#include "lea6sAPIs.h"
#include "tmp75APIs.h"
#include "mcp2120APIs.h"
#include "bh1750fviAPIs.h"
#include "mag3110APIs.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void Sensor_Configuration(void); 
	 
void Mag_Error_Handle (short*,short*,short*,short*,short*,short*,short*,short*,short*);
int Mag_flatsurface(short*,short*);
int getcompasscourse(short*,short*,short*,short*,short*,short*);
uint8_t get_direction(int*);
uint8_t get_brightness (unsigned short*);
uint8_t get_gps_value(uint8_t*, uint8_t*, uint8_t*, uint8_t*, uint8_t*, uint8_t*, uint8_t*, uint8_t*);
uint8_t get_temperature(float*);
uint8_t get_velocity(int*);
uint8_t get_LOS_device(uint16_t*, int);
uint8_t get_motion_status(void);
uint8_t Pir_StatusCheck(void);


#ifdef __cplusplus
}
#endif

#endif /* __SENSOR_H */

/******** (C) COPYRIGHT 2015 NTU NXG LAB ******END OF FILE********/



