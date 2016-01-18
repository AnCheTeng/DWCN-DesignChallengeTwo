/******************** (C) COPYRIGHT 2013 XXXXXX Corp. **************************
* File Name          : mpu6050REGs.h
* Author             : Ethan Chung
* Version            : v1.0.0.0
* Date               : 25-Jun-2013
* Description        : MPU6050D Register File
*******************************************************************************/
/* Define to prevent recursive inclusion ------------------------------------ */
#ifndef __MPU6050_REG_H
#define __MPU6050_REG_H

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
#define	    SELF_TEST_X         0x0D        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define	    SELF_TEST_Y         0x0E        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define	    SELF_TEST_Z         0x0F        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define	    SELF_TEST_A         0x10        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     SMPLRT_DIV          0x19        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     CONFIG              0x1A        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     GYRO_CONFIG         0x1B        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     ACCEL_CONFIG        0x1C        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     MOT_THR             0x1F        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     FIFO_EN             0x23        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_MST_CTRL        0x24        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_SLV0_ADDR       0x25        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_SLV0_REG        0x26        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_SLV0_CTRL       0x27        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_SLV1_ADDR       0x28        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_SLV1_REG        0x29        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_SLV1_CTRL       0x2A        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_SLV2_ADDR       0x2B        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_SLV2_REG        0x2C        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_SLV2_CTRL       0x2D        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_SLV3_ADDR       0x2E        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_SLV3_REG        0x2F        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_SLV3_CTRL       0x30        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_SLV4_ADDR       0x31        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_SLV4_REG        0x32        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_SLV4_DO         0x33        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_SLV4_CTRL       0x34        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_SLV4_DI         0x35        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_MST_STATUS      0x36        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     INT_PIN_CFG         0x37        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     INT_ENABLE          0x38        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     INT_STATUS          0x3A        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     ACCEL_XOUT_H        0x3B        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     ACCEL_XOUT_L        0x3C        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     ACCEL_YOUT_H        0x3D        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     ACCEL_YOUT_L        0x3E        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     ACCEL_ZOUT_H        0x3F        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     ACCEL_ZOUT_L        0x40        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     TEMP_OUT_H          0x41        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     TEMP_OUT_L          0x42        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     GYRO_XOUT_H         0x43        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     GYRO_XOUT_L         0x44        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     GYRO_YOUT_H         0x45        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     GYRO_YOUT_L         0x46        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     GYRO_ZOUT_H         0x47        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     GYRO_ZOUT_L         0x48        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_00    0x49        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_01    0x4A        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_02    0x4B        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_03    0x4C        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_04    0x4D        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_05    0x4E        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_06    0x4F        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_07    0x50        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_08    0x51        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_09    0x52        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_10    0x53        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_11    0x54        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_12    0x55        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_13    0x56        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_14    0x57        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_15    0x58        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_16    0x59        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_17    0x5A        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_18    0x5B        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_19    0x5C        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_20    0x5D        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_21    0x5E        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_22    0x5F        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     EXT_SENS_DATA_23    0x60        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_SLV0_DO         0x63        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_SLV1_DO         0x64        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_SLV2_DO         0x65        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_SLV3_DO         0x66        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     I2C_MST_DELAY_CTRL  0x67        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     SIGNAL_PATH_RESET   0x68        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     MOT_DETECT_CTRL     0x69        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     USER_CTRL           0x6A        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     PWR_MGMT_1          0x6B        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     PWR_MGMT_2          0x6C        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     FIFO_COUNTH         0x72        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     FIFO_COUNTL         0x73        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     FIFO_R_W            0x74        // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)
#define     WHO_AM_I            0x75        // (R/-) MSB  -- / -- / -- / -- / -- / -- / -- / --  LSB -- XXXXXX (Power on default : 0x00)

/* Exported functions ------------------------------------------------------- */

#ifdef __cplusplus
}
#endif

#endif /* __MPU6050_REG_H */

/******** (C) COPYRIGHT 2013 XXXXXX Corp. *******************END OF FILE********/
