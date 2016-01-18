/******************** (C) COPYRIGHT 2013 Uniband Electronic Corp. **************
* File Name          : mpudmpAPIs.h
* Author             : Ethan Chung
* Version            : v1.0.0.0
* Date               : 25-Jun-2013
* Description        : 
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MPU_DMP_API_H
#define __MPU_DMP_API_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/*
	Power saving mode definitions
*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
/*******************************************************************************
  * @brief  Initialize mpu dmp
  * @param  None
  * @retval None
  */
void MpuDMPInit(const signed char *mtx);

/*******************************************************************************
  * @brief  Initialize mpu dmp
  * @param  None
  * @retval None
  */
void MpuDMPRead(short *gyro, short *accel, long *quat);

/*******************************************************************************
  * @brief  Initialize mpu dmp
  * @param  None
  * @retval None
  */
void MpuDMPRunSelfTest(void);

/*******************************************************************************
  * @brief  Initialize mpu dmp
  * @param  None
  * @retval None
  */
unsigned short MpuDMPOrientationMatrixToScalar(const signed char *mtx);

/*******************************************************************************
  * @brief  Initialize mpu dmp
  * @param  None
  * @retval None
  */
unsigned short MpuDMPRowToScale(const signed char *row);

#ifdef __cplusplus
}
#endif

#endif /* __MPU_DMP_API_H */

/******** (C) COPYRIGHT 2013 Uniband Electronic Corp. ******END OF FILE********/
