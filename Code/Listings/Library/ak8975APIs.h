/******************** (C) COPYRIGHT 2013 Uniband Electronic Corp. **************
* File Name          : ak8975APIs.h
* Author             : Ethan Chung
* Version            : v1.0.0.0
* Date               : 25-Jun-2013
* Description        : 
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __AK8795_API_H
#define __MPU6050_API_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
/********************** I2C Address Setting ************************************
                 I2C Slave ID (HEX W/R)  Comments
                 0x18                    0001100 0/1
*******************************************************************************/

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
/*******************************************************************************
  * @brief  Initilaize Ak8975
  * @param  None
  * @retval None
  */
void Ak8975Init(unsigned char DevID);

/*******************************************************************************
  * @brief  Ak8975 Tx.
  * @param  DestAddr: To
  * @param  pData: The data Tx
  * @param  DataLen: The number of data need to Tx
  * @retval Ref to system.h - StatusTypeDef.
  */
void Ak8975ReadMag(unsigned char DevID, short *pX, short *pY, short *pZ);

#ifdef __cplusplus
}
#endif

#endif /* __MPU6050_API_H */

/******** (C) COPYRIGHT 2013 Uniband Electronic Corp. ******END OF FILE********/
