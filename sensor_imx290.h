#ifndef _SENSOR_IMX290_H_
#define _SENSOR_IMX290_H_

#include <cyu3types.h>

#define DVK_SDK_PORT
#define HD720P
#define UVC

typedef unsigned char  BYTE;
typedef unsigned int 	uint;

#define IMG_SENSOR_FULL_SIZE_WIDTH  6000
#define IMG_SENSOR_FULL_SIZE_HEIGHT 5000

#define AP0100_AUTO_EXPOSURE_MODE 0x00
#define AP0100_MANUAL_EXPOSURE_MODE 0xB0


/*1280*720*2/16384*/   /*112*/
#define FULL_FRAME_BUFFER_COUNT_720P                 113  //(112 full+1partical)

#define DEFAULT_EXPOSURE_TIME 					(500)

#define REG_PGC_LOW  0x09
#define REG_PGC_HIGH 0x0A
#define REG_SHR_LOW  0x0B
#define REG_SHR_HIGH 0x0C
#define REG_APGC01	 0x352
#define REG_APGC02	 0x356

#define REG_EXPOSURE_LOW  0X203
#define REG_EXPOSURE_HIGH 0X202

#define REG_GAIN_LOW  0X205
#define REG_GAIN_HIGH 0X204

/***************************************************************************************************************
**                                          function declaration
***************************************************************************************************************/
CyU3PReturnStatus_t
IMX290_SensorWrite1B (
        uint8_t highAddr,
        uint8_t lowAddr,
        uint8_t lowData);

CyU3PReturnStatus_t
IMX290_SensorRead1B (
        uint8_t highAddr,
        uint8_t lowAddr,
        uint8_t *buf);


extern int IMX290_tc_mipi_bridge_write_reg(uint16_t addr, uint16_t data);
extern int IMX290_tc_mipi_bridge_read_reg(uint16_t addr, uint16_t *data);


void
IMX290_delay(int);

void
IMX290_sensor_init(uint8_t usb_type);

void
IMX290_sensor_reset(void);

BYTE
IMX290_I2C_BUS_TEST(void);

/* Function    : IMX290_SensorGetBrightness
   Description : Get the current brightness setting from the MT9M114 sensor.
   Parameters  : None
 */
extern uint8_t
IMX290_SensorGetBrightness (
        void);

/* Function    : IMX290_SensorSetBrightness
   Description : Set the desired brightness setting on the MT9M114 sensor.
   Parameters  :
                 brightness - Desired brightness level.
 */
extern void
IMX290_SensorSetBrightness (
        uint8_t brightness);
/* Function    : IMX290_SensorGetContrast
   Description : Get the current Contrast setting from the MT9M114 sensor.
   Parameters  : None
 */
extern uint8_t
IMX290_SensorGetContrast (
        void);

/* Function    : IMX290_SensorSetContrast
   Description : Set the desired Contrast setting on the MT9M114 sensor.
   Parameters  :
                 Contrast - Desired Contrast level.
 */
extern void
IMX290_SensorSetContrast (
        uint8_t Contrast);

/*HUE Control*/
extern uint8_t
IMX290_SensorGetHUE (
        void);
extern void
IMX290_SensorSetHUE (
        uint8_t HUE);



/*AWB AUTO Control */
extern uint8_t
IMX290_SensorGetAWB (
void );
extern void
IMX290_SensorSetAWB (
        uint8_t enable);



/*AWB TMP Control*/
extern uint16_t
IMX290_SensorGetAWB_TMP (
        void);
extern void
IMX290_SensorSetAWB_TMP (
        uint16_t tmp);



/*Saturation Control*/
extern uint8_t
IMX290_SensorGetSaturation (
        void);
extern void
IMX290_SensorSetSaturation (
        uint8_t tmp);



/*Sharpness Control*/
extern void
IMX290_SensorSetSharpness (
        uint8_t tmp);
extern uint8_t
IMX290_SensorGetSharpness (
        void);



/*Gamma Control*/
extern void
IMX290_SensorSetGamma (
        uint8_t tmp);
extern uint8_t
IMX290_SensorGetGamma (
        void);



/*Backlight Control*/
extern uint8_t
IMX290_SensorGetBacklight (
        void);
void
IMX290_SensorSetBacklight (
        uint8_t tmp);



/*AE Mode Control*/
extern uint8_t
IMX290_SensorGetAEMode (
void );
extern void
IMX290_SensorSetAEMode (
        uint8_t enable);



/*Exposuretime Control*/
extern uint16_t
IMX290_SensorGetExposuretime (
        void);
void
IMX290_SensorSetExposuretime (
        uint16_t tmp);


/*
   Power Line Frequency Control
 */
extern uint8_t
IMX290_SensorGetPowerLineFreq (
void );
extern void
IMX290_SensorSetPowerLineFreq (
        uint8_t enable);


/*
  Gain Control
 */
extern uint8_t
IMX290_SensorGetGain (
        void);
extern void
IMX290_SensorSetGain (
        uint8_t tmp);

/*
Sensor Mode Switch
*/
extern uint8_t
IMX290_SensorGetSensorMode(void);

extern void
IMX290_SensorSetSensorMode(
uint8_t mode);

void IMX290_GetRGBGain(uint16_t *rGain, uint16_t *grGain, uint16_t *gbGain, uint16_t *bGain);
void IMX290_SetWindow(uint16_t startX,uint16_t startY,uint16_t endX,uint16_t endY);
void IMX290_StreamEn(uint8_t enable);
void IMX290_SetRGBGain(uint16_t rGain, uint16_t grGain, uint16_t gbGain, uint16_t bGain);

extern int IMX290_tc_mipi_bridge_write_reg(uint16_t addr, uint16_t data);

#endif
