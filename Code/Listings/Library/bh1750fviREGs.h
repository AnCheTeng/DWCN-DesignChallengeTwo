/******************** (C) COPYRIGHT 2009 U-PEC Electronics Corp. ***************
* File Name          : bh1750fviREGs.h
* Author             : Ethan Chung
* Version            : V1.0.0.0
* Date               : 03/07/2014
* Description        : Header for BH1750FVI
*******************************************************************************/
/* Define to prevent recursive inclusion ------------------------------------ */
#ifndef __BH1750FVI_REG_H
#define __BH1750FVI_REG_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/************** BH1750FVI/BH1750FVI Register Map with Default settings*************/
/*      Register Name  |  Register Address  |  Type*/
#define LUX_REGISTER_H      0x10            // (R)   MSB  D7 / D6 / D5 / D4 / D3 / D2 / D1 / D0  LSB -- Illuminance High Byte REGISTER (Power on default : 0x00)
#define LUX_REGISTER_L      0x11            // (R)   MSB  D7 / D6 / D5 / D4 / D3 / D2 / D1 / D0  LSB -- Illuminance Low Byte REGISTER (Power on default : 0x00)

/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

#ifdef __cplusplus
}
#endif

#endif /* __BH1750FVI_REG_H */

