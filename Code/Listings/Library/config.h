/******************** (C) COPYRIGHT 2015 NTU NXG LAB  **************
* File Name          : config.h
* Author             : AutoNet Team
* Version            : v1.0.0
* Date               : 21-Sep-2015
* Description        : 
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __CONFIG_H
#define __CONFIG_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <string.h>
#include <stdlib.h>
#include "st.h"
#include "stm32f0xx_it.h"
#include "us2400APIs.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void GPIO_Configuration(void);
void EXTI_Configuration(void);

#ifdef __cplusplus
}
#endif

#endif /* __CONFIG_H */

/******** (C) COPYRIGHT 2015 NTU NXG LAB ******END OF FILE********/



