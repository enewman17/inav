#pragma once

#define TARGET_BOARD_IDENTIFIER "GONZOFLIGHT_F405"
#define USBD_PRODUCT_STRING "GonzoFlight F405"

// LEDs
#define LED0 PB2  // Blue

// Beeper
#define BEEPER PB9
#define BEEPER_INVERTED

/*
 * Buses
 */
#define USE_SPI

// SPI1
#define USE_SPI_DEVICE_1
#define SPI1_NSS_PIN PA4
#define SPI1_SCK_PIN PA5
#define SPI1_MISO_PIN PA6
#define SPI1_MOSI_PIN PA7

// SPI2
#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN PB13
#define SPI2_MISO_PIN PC2
#define SPI2_MOSI_PIN PC3

// SPI3
#define USE_SPI_DEVICE_3
#define SPI3_NSS_PIN   PA15
#define SPI3_SCK_PIN   PC10
#define SPI3_MISO_PIN  PC11
#define SPI3_MOSI_PIN  PC12

// MPU6500
#define USE_IMU_MPU6500
#define MPU6500_CS_PIN PB12
#define MPU6500_SPI_BUS BUS_SPI2
#define IMU_MPU6500_ALIGN CW0_DEG

// MPU9255
#define USE_IMU_MPU9255
#define MPU9255_CS_PIN PB12
#define MPU9255_SPI_BUS BUS_SPI2
#define IMU_MPU9255_ALIGN CW0_DEG

// MPU9250
#define USE_IMU_MPU9250
#define MPU9250_CS_PIN PB12
#define MPU9250_SPI_BUS BUS_SPI2
#define IMU_MPU9250_ALIGN CW0_DEG

// BMI270
#define USE_IMU_BMI270
#define BMI270_CS_PIN PB12
#define BMI270_SPI_BUS BUS_SPI2
#define IMU_BMI270_ALIGN CW0_DEG

// ICM42605
#define USE_IMU_ICM42605
#define ICM42605_CS_PIN PB12
#define ICM42605_SPI_BUS BUS_SPI2
#define IMU_ICM42605_ALIGN CW0_DEG

// Baro
#define USE_BARO
#define BARO_CD_PIN  PC1
#define USE_BARO_BMP280
#define USE_BARO_MS5611
#define USE_BARO_BMP085
#define USE_BARO_DPS310
#define USE_BARO_SPL06

// OSD
// #define USE_MAX7456
// #define MAX7456_CS_PIN PA15
// #define MAX7456_SPI_BUS BUS_SPI3

// *************** I2C/Baro/Mag *********************
#define USE_I2C

#define USE_I2C_DEVICE_2
#define I2C2_SCL                PB10
#define I2C2_SDA                PB11
#define USE_I2C_PULLUP

#define USE_BARO
#define BARO_I2C_BUS            BUS_I2C2
#define USE_BARO_BMP280
#define USE_BARO_DPS310
#define USE_BARO_MS5611

#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C2
#define USE_MAG_ALL

#define USE_RANGEFINDER
#define RANGEFINDER_I2C_BUS     BUS_I2C2

// Serial ports
#define USB_IO
#define USE_VCP
#define USE_USB_DETECT

#define USE_UART1
#define UART1_TX_PIN PB7
#define UART1_RX_PIN PB6

#define USE_UART2
#define UART2_TX_PIN PA2
#define UART2_RX_PIN PA3

#define USE_UART3
#define UART3_TX_PIN PC10
#define UART3_RX_PIN PC11

#define USE_UART4
#define UART4_TX_PIN PC10
#define UART4_RX_PIN PC11

#define USE_UART5
#define UART5_TX_PIN PC12
#define UART5_RX_PIN PD2

#define USE_UART6
#define UART6_TX_PIN PC6
#define UART6_RX_PIN PC7
#define INVERTER_PIN_UART6_RX   PC15

#define SERIAL_PORT_COUNT       7

#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_SBUS
#define SERIALRX_UART           SERIAL_PORT_USART6
#define USE_UART_INVERTER


// *************** ADC *****************************
#define USE_ADC
#define ADC_INSTANCE                ADC1
#define ADC1_DMA_STREAM             DMA2_Stream0
#define ADC_CHANNEL_1_PIN           PC4
#define ADC_CHANNEL_2_PIN           PC5
#define ADC_CHANNEL_3_PIN           PB0
#define ADC_CHANNEL_4_PIN           PC0
#define VBAT_ADC_CHANNEL            ADC_CHN_1
#define CURRENT_METER_ADC_CHANNEL   ADC_CHN_2
#define RSSI_ADC_CHANNEL            ADC_CHN_3
#define AIRSPEED_ADC_CHANNEL        ADC_CHN_4


#define USE_LED_STRIP
#define WS2811_PIN                      PB1

#define DEFAULT_FEATURES        (FEATURE_TX_PROF_SEL| FEATURE_CURRENT_METER | FEATURE_VBAT | FEATURE_TELEMETRY | FEATURE_SOFTSERIAL)
#define CURRENT_METER_SCALE   250

#define MAX_PWM_OUTPUT_PORTS        8

#define USE_DSHOT


#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         (BIT(2))


// SD Card
#define ENABLE_BLACKBOX_LOGGING_ON_SDCARD_BY_DEFAULT
#define USE_SDCARD
// #define USE_SDCARD_SPI_BUS  BUS_SPI3
#define USE_SDCARD_SDIO
//#define SDCARD_SDIO_DMA         DMA_TAG(2,3,4)
#define SDCARD_SDIO_4BIT
#define SDCARD_DETECT               PA8
