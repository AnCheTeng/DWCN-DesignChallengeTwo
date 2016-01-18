/******************** (C) COPYRIGHT 2013 Uniband Electronic Corp. **************
* File Name          : mpu6050APIs.h
* Author             : Ethan Chung
* Version            : v1.0.0.0
* Date               : 25-Jun-2013
* Description        : 
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MPU6050_API_H
#define __MPU6050_API_H

#ifdef __cplusplus
 extern "C" {
#endif
	 
#include "stdint.h"
#define Acc_Threshold					500

/* Includes ------------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/*
	Power saving mode definitions
*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
/*******************************************************************************
  * @brief  Initilaize MPU6050D
  * @param  None
  * @retval None
  */	
void Mpu6050Init(unsigned char DevID);

/*******************************************************************************
  * @brief  mpu6050 Tx.
  * @param  DestAddr: To
  * @param  pData: The data Tx
  * @param  DataLen: The number of data need to Tx
  * @retval Ref to system.h - StatusTypeDef.
  */
void Mpu6050ReadAccel(unsigned char DevID, short *pX, short *pY, short *pZ);

/*******************************************************************************
  * @brief  mpu6050 Tx.
  * @param  DestAddr: To
  * @param  pData: The data Tx
  * @param  DataLen: The number of data need to Tx
  * @retval Ref to system.h - StatusTypeDef.
  */
void Mpu6050ReadGyro(unsigned char DevID, short *pX, short *pY, short *pZ);

/*******************************************************************************
  * @brief  mpu6050 Tx.
  * @param  DestAddr: To
  * @param  pData: The data Tx
  * @param  DataLen: The number of data need to Tx
  * @retval Ref to system.h - StatusTypeDef.
  */
void Mpu6050ReadTemp(unsigned char DevID, char *pTemp);

void Calculate_Speed(float *Speed_x,float *Speed_y,float *Speed_z,uint16_t *Speed,int t);
void loop(void);
void meansensors(void);
void calibration(void);
int Estimate_State(void);
//void kalmanFilter(float *inData);
//void Calculate_Offset(void);


#ifdef __cplusplus
}
#endif

#endif /* __MPU6050_API_H */

/******** (C) COPYRIGHT 2013 Uniband Electronic Corp. ******END OF FILE********/
