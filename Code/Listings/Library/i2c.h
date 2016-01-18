/******************** (C) COPYRIGHT 2013 Uniband Electronic Corp. **************
* File Name          : i2c.h
* Author             : Ethan Chung
* Version            : v1.0.0.0
* Date               : 25-Jun-2013
* Description        : 
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __I2C_H
#define __I2C_H

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
  * @brief  Initializes the SPI and put it into StandBy State (Ready for 
  *         data transfer).
  * @param  None
  * @retval None
  */
void I2C_Configuration(void);

/**
  * @brief  I2C Processing Read
  * @param  p: Specifies the data to be process.
  * @param  len: Specifies the data len to be process.
  * @retval None
  */
ErrorStatus I2C_Read(uint8_t DevID, uint8_t RegName, uint16_t NumByteToRead, uint8_t *p);

/**
  * @brief  I2C Processing Write
  * @param  p: Specifies the data to be process.
  * @param  len: Specifies the data len to be process.
  * @retval None
  */
ErrorStatus I2C_Write(uint8_t DevID, uint8_t RegName, uint16_t NumByteToWrite, uint8_t *p);

#ifdef __cplusplus
}
#endif

#endif /* __I2C_H */

/******** (C) COPYRIGHT 2013 Uniband Electronic Corp. ******END OF FILE********/
