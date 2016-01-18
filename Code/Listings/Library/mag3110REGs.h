/******************** (C) COPYRIGHT 2009 U-PEC Electronics Corp. ***************
* File Name          : mag3110REGs.h
* Author             : Ethan Chung
* Version            : V1.0.0.0
* Date               : 03/07/2009
* Description        : Header for TMP75
*******************************************************************************/
/* Define to prevent recursive inclusion ------------------------------------ */
#ifndef __MAG3110_REG_H
#define __MAG3110_REG_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/****************** MAG3110 Register Map with Default settings ****************/
/*      Register Name  |  Register Address  |  Type*/
#define DR_STATUS                 0x00      // (R)   RO Data ready status per axis
#define OUT_X_MSB                 0x01      // (R)   RO data Bits [15:8] of X measurement
#define OUT_X_LSB                 0x02      // (R)   RO data Bits [7:0] of X measurement
#define OUT_Y_MSB                 0x03      // (R)   RO data Bits [15:8] of Y measurement
#define OUT_Y_LSB                 0x04      // (R)   RO data Bits [7:0] of Y measurement
#define OUT_Z_MSB                 0x05      // (R)   RO data Bits [15:8] of Z measurement
#define OUT_Z_LSB                 0x06      // (R)   RO data Bits [7:0] of Z measurement
#define WHO_AM_I                  0x07      // (R)   RO Device ID Number
#define I_AM_MAG3110              0xC4      //       WHO_AM_I Return Value
#define SYSMOD                    0x08      // (R)   RO data Current System Mode
#define OFF_X_MSB                 0x09      // (RW)  RW Bits [14:7] of user X offset
#define OFF_X_LSB                 0x0A      // (RW)  RW Bits [6:0] of user X offset
#define OFF_Y_MSB                 0x0B      // (RW)  RW Bits [14:7] of user Y offset
#define OFF_Y_LSB                 0x0C      // (RW)  RW Bits [6:0] of user Y offset
#define OFF_Z_MSB                 0x0D      // (RW)  RW Bits [14:7] of user Z offset
#define OFF_Z_LSB                 0x0E      // (RW)  RW Bits [6:0] of user Z offset
#define DIE_TEMP                  0x0F      // (R)   RO data Temperature, signed 8 bits in ?
#define CTRL_REG1                 0x10      // (RW)  RW Operation modes. Modification of this register? contents can only occur when device is ?TANDBY?mode,
#define CTRL_REG2                 0x11      // (RW)  RW Operation modes

/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

#ifdef __cplusplus
}
#endif

#endif /* __MAG3110_REG_H */

