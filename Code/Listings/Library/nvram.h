/******************** (C) COPYRIGHT 2013 Uniband Electronic Corp. **************
* File Name          : nvram.h
* Author             : Ethan Chung
* Version            : v1.0.0.0
* Date               : 25-Jun-2013
* Description        : 
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __NVRAM_H
#define __NVRAM_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
/**
  * @brief  Flash Read.
  * @param  None
  * @retval None
  */
void Flash_Read(void);

/**
  * @brief  Flash Write.
  * @param  None
  * @retval None
  */
void Flash_Write(void);

#ifdef __cplusplus
}
#endif

#endif /* __NVRAM_H */

/******** (C) COPYRIGHT 2013 Uniband Electronic Corp. ******END OF FILE********/
