/******************** (C) COPYRIGHT 2013 XXXXXX Corp. **************************
* File Name          : ak8975REGs.h
* Author             : Ethan Chung
* Version            : v1.0.0.0
* Date               : 25-Jun-2013
* Description        : AK8975 E-COMPASS Register File
*******************************************************************************/
/* Define to prevent recursive inclusion ------------------------------------ */
#ifndef __AK8975_REG_H
#define __AK8975_REG_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported define -----------------------------------------------------------*/
/*******************************************************************************
              - MPU6050 Register Map with Default settings -
        Register Name  |  Register Address  |  Type                           */
#define	    WIA                 0x00        // (R/O) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define	    INFO                0x01        // (R/O) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define	    ST1                 0x02        // (R/O) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define	    HXL                 0x03        // (R/O) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     HXH                 0x04        // (R/O) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     HYL                 0x05        // (R/O) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     HYH                 0x06        // (R/O) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     HZL                 0x07        // (R/O) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     HZH                 0x08        // (R/O) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     ST2                 0x09        // (R/O) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     CNTL                0x0A        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     RSV                 0x0B        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     ASTC                0x0C        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     TS1                 0x0D        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     TS2                 0x0E        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2CDIS              0x0F        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     ASAX                0x10        // (R/O) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     ASAY                0x11        // (R/O) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     ASAZ                0x12        // (R/O) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)

/* Exported functions ------------------------------------------------------- */

#ifdef __cplusplus
}
#endif

#endif /* __AK8975_REG_H */

/******** (C) COPYRIGHT 2013 XXXXXX Corp. *******************END OF FILE********/
