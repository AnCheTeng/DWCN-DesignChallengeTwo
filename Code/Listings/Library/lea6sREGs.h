/******************** (C) COPYRIGHT 2009 U-PEC Electronics Corp. ***************
* File Name          : lea6sREGs.h
* Author             : Ethan Chung
* Version            : V1.0.0.0
* Date               : 03/07/2014
* Description        : Header for LEA6S
*******************************************************************************/
/* Define to prevent recursive inclusion ------------------------------------ */
#ifndef __LEA6S_REG_H
#define __LEA6S_REG_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/************** LEA6S/LEA6S Register Map with Default settings*************/
/*      Register Name  |  Register Address  |  Type*/
#define DATA_REGISTER     0xFF      // (R)   MSB  D7 / D6 / D5 / D4 / D3 / D2 / D1 / D0  LSB -- DATA REGISTER (Power on default : 0xFF)

/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

#ifdef __cplusplus
}
#endif

#endif /* __LEA6S_REG_H */

