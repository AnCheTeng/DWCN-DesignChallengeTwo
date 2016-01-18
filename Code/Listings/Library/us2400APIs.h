/******************** (C) COPYRIGHT 2013 Uniband Electronic Corp. **************
* File Name          : us2400.h
* Author             : Ethan Chung
* Version            : v1.0.0.0
* Date               : 25-Jun-2013
* Description        : 
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __US2400_API_H
#define __US2400_API_H

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
  * @brief  Initilaize US2400D
  * @param  None
  * @retval None
  */
void Us2400Init(unsigned short Frequency, unsigned short PanID, unsigned short Addr, unsigned char TPower);

/*******************************************************************************
  * @brief  US2400D Tx.
  * @param  DestAddr: To
  * @param  pData: The data Tx
  * @param  DataLen: The number of data need to Tx
  * @retval Ref to system.h - StatusTypeDef.
  */
void Us2400Tx(unsigned short DestAddr, unsigned char *pData, unsigned short DataLen);

/*******************************************************************************
  * @brief  US2400D Rx.
  * @param  SrcAddr: From
  * @param  pData: The data Rx
  * @param  pDataLen: Rx data length
  * @retval Ref to system.h - StatusTypeDef.
  */
void Us2400Rx(unsigned char *pData, unsigned char *pDataLen, unsigned char *pLqi, unsigned char *pRssi);
void Us2400RxFIFODump(unsigned char *pData, unsigned char *pDataLen);
	
/*******************************************************************************
  * @brief  US2400 Into Deep Sleep.
  * @param  None
  * @retval None
  */
void Us2400IntoDeepSleep(void);

/*******************************************************************************
  * @brief  US2400 Resume.
  * @param  None
  * @retval None
  */
void Us2400Resume(void);

/*******************************************************************************
  * @brief  US2400 Set Tx power.
  * @param  Level:
  * @retval None
  */
void Us2400SetTxPower(unsigned char Level);

/*******************************************************************************
  * @brief  US2400D Single Tone.
  * @param  State: ON/OFF
  * @retval
  */
void Us2400SingleTone(unsigned char State);

/*******************************************************************************
  * @brief  US2400D Continue Wave.
  * @param  State: ON/OFF
  * @retval
  */
void Us2400ContinueWave(unsigned char State);

/*******************************************************************************
  * @brief  US2400D read short register.
  * @param  RegAddress: 
  * @retval RegVal:
  */
unsigned char Us2400ReadShortReg(unsigned char RegAddr);

/*******************************************************************************
  * @brief  US2400D write short register.
  * @param  RegAddr: 
  *         RegVal:
  * @retval None
  */
void Us2400WriteShortReg(unsigned char RegAddr, unsigned char RegVal);

/*******************************************************************************
  * @brief  US2400D read long register.
  * @param  RegAddress: 
  * @retval RegVal:
  */
unsigned char Us2400ReadLongReg(unsigned short RegAddr);

/*******************************************************************************
  * @brief  US2400D write long register.
  * @param  RegAddr: 
  *         RegVal:
  * @retval None
  */
void Us2400WriteLongReg(unsigned short RegAddr, unsigned char RegVal);

#ifdef __cplusplus
}
#endif

#endif /* __US2400_API_H */

/******** (C) COPYRIGHT 2013 Uniband Electronic Corp. ******END OF FILE********/
