/******************** (C) COPYRIGHT 2013 Uniband Electronic Corp. **************
* File Name          : st.h
* Author             : Ethan Chung
* Version            : v1.0.0.0
* Date               : 25-Jun-2013
* Description        : 
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __ST_H
#define __ST_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx.h"
#define NumOfDeviceInTable 64
#define NumOfDeviceInIRTable 16

/* Exported types ------------------------------------------------------------*/
typedef enum {
	TIM_STOP = 0,
	TIM_DELAY,
	TIM_100MS,
	TIM_IR,
	TIM_n
} TmrTypeDef_e;

typedef struct {
  unsigned int  Ticks;
  unsigned int  Period;
} TimTypeDef_s;

typedef struct {
  TimTypeDef_s Tim[TIM_n];
	uint8_t TimeoutFlag;
} TimObjTypeDef_s;

typedef struct {
	uint64_t TimeEnableFlagForTable;
	uint64_t TimeoutFlagForTable;
  uint32_t Ticks[NumOfDeviceInTable];
} TimForTableDef_s;

typedef struct {
	uint64_t TimeEnableFlagForIRTable1;
	uint64_t TimeEnableFlagForIRTable2;
	uint64_t TimeoutFlagForIRTable1;
  uint64_t TimeoutFlagForIRTable2;
	uint32_t Ticks1[NumOfDeviceInIRTable];
	uint32_t Ticks2[NumOfDeviceInIRTable];
} TimForIRTableDef_s;


#define TIMOUT_FLAG_STOP     		0x01
#define TIMOUT_FLAG_DELAY     	0x02
#define TIMOUT_FLAG_100MS	  		0x04
#define TIMOUT_FLAG_IR					0x08

/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
/**
  * @brief  Initializes the SPI and put it into StandBy State (Ready for 
  *         data transfer).
  * @param  None
  * @retval None
  */
void ST_Configuration(void);

/**
  * @brief  SPI Processing Tx/Rx
  * @param  p: Specifies the data to be process.
  * @param  len: Specifies the data len to be process.
  * @retval None
  */
void ST_Proc(void);

/**
  * @brief  Inserts a delay time.
  * @param  nTime: specifies the delay time length, in 1 ms.
  * @retval None
  */
void Delay(__IO uint32_t nTime);

#ifdef __cplusplus
}
#endif

#endif /* __ST_H */

/******** (C) COPYRIGHT 2013 Uniband Electronic Corp. ******END OF FILE********/
