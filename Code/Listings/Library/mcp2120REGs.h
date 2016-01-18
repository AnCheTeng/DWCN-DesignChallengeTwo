/******************** (C) COPYRIGHT 2009 U-PEC Electronics Corp. ***************
* File Name          : mcp2120REGs.h
* Author             : Ethan Chung
* Version            : V1.0.0.0
* Date               : 03/07/2014
* Description        : Header for MCP2120
*******************************************************************************/
/* Define to prevent recursive inclusion ------------------------------------ */
#ifndef __MCP2120_REG_H
#define __MCP2120_REG_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/************** MCP2120/MCP2120 Register Map with Default settings*************/
/*      Register Name  |  Register Address  |  Type*/
#define TEMPERATURE_REGISTER      0x00      // (R)   MSB  D7 / D6 / D5 / D4 / D3 / D2 / D1 / D0  LSB -- TEMPERATURE REGISTER (Power on default : 0x00)
#define CONFIGURATION_REGISTER    0x01      // (R/W) MSB  OS / R1 / R0 / F1 / F0 / POL / TM / SD  LSB -- CONFIGURATION REGISTER (Power on default : 0x00)
#define TEMPERATURE_LOW_REGISTER  0x02      // (R/W)
#define TEMPERATURE_HIGH_REGISTER 0x03      // (R/W)

/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

#ifdef __cplusplus
}
#endif

#endif /* __MCP2120_REG_H */

