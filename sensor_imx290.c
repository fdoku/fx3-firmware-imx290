
#include <cyu3system.h>
#include <cyu3os.h>
#include <cyu3dma.h>
#include <cyu3error.h>
#include <cyu3uart.h>
#include <cyu3i2c.h>
#include <cyu3types.h>
#include <cyu3gpio.h>
#include "uvc_settings.h"

//#include "../hardware.h"
#include "sensor_imx290.h"
#include "IMX290_reg.h"

#include<cyu3usb.h>

#define LI_SENSOR_REG_CHECK

#define MAX_ANALOG_GAIN 448
#define TOTAL_LINE 3000
static uint16_t analogGain = 0x80;
static uint16_t exposure_time = 500;

extern int IMX290_tc_mipi_bridge_dev_init(int mode);

static CyU3PUSBSpeed_t USpeed = CY_U3P_NOT_CONNECTED;        /* Current USB connection speed. */
static CyBool_t master = CyTrue;

/*************************************************************************************************************
**                               Global data & Function declaration
*************************************************************************************************************/

static BYTE Buf[2];

static uint8_t AE_MODE_CUR=0;//auto

int ggusb_type;

static void
IMX290_ChipID_Check(void);

/*************************************************************************************************************
**                                  Function definition
*************************************************************************************************************/

CyU3PReturnStatus_t
IMX290_ChannelI2CWrite(uint8_t pChannel)
{
    CyU3PReturnStatus_t apiRetStatus=CY_U3P_SUCCESS;
    CyU3PI2cPreamble_t preamble;

	//preamble.buffer[1] = Addr;
	preamble.buffer[0] = 0xE6; /* Slave address: Write operation */
	preamble.length = 1;
	preamble.ctrlMask = 0x0000;
	apiRetStatus = CyU3PI2cTransmitBytes (&preamble, &pChannel, 1, 0);
	if (apiRetStatus == CY_U3P_SUCCESS)
	{
		IMX290_delay(800); /* known issue for SDK I2C */

	}
	return apiRetStatus;
}


CyU3PReturnStatus_t
IMX290_Initdone ()
{
#if 0
    CyU3PReturnStatus_t apiRetStatus = CY_U3P_SUCCESS;
    CyU3PI2cPreamble_t  preamble;
    uint8_t buf[6];
    uint8_t i2c_slave_add;

    if(master)
    	i2c_slave_add = 0xA4;
    else
    	i2c_slave_add = 0xAC;

    /* Set the parameters for the I2C API access and then call the write API. */
    preamble.buffer[0] = i2c_slave_add; // address
    preamble.buffer[1] = 0x04; // release reset command
    preamble.length    = 2;             /*  Three byte preamble. */
    preamble.ctrlMask  = 0x0000;        /*  No additional start and stop bits. */

    buf[0] = 0x55; // random address
    buf[1] = 0;
    buf[2] = 0;
    buf[3] = 0;

    apiRetStatus = CyU3PI2cTransmitBytes (&preamble, buf, 4, 0);
	if (apiRetStatus == CY_U3P_SUCCESS)
	{
		IMX290_delay(800);
	}

    return apiRetStatus;
#endif
}

// type : 0 : pixel count per line
//        1 : line count per frame
//        2 : left margin
//        3 : top margin
CyU3PReturnStatus_t
IMX290_SetPosNMargin (uint16_t type, uint16_t value)
{
#if 0
    CyU3PReturnStatus_t apiRetStatus = CY_U3P_SUCCESS;
    CyU3PI2cPreamble_t  preamble;
    uint8_t buf[6];
    uint8_t i2c_slave_add;

    if(master)
    	i2c_slave_add = 0xA4;
    else
    	i2c_slave_add = 0xAC;

    CyU3PDebugPrint (4, "IMX290_SetPosNMargin: type: %d, value: %d\r\n",type, value);

    /* Set the parameters for the I2C API access and then call the write API. */
    preamble.buffer[0] = i2c_slave_add; // address
    preamble.buffer[1] = 5 + type; // set left margin command
    preamble.length    = 2;             /*  Three byte preamble. */
    preamble.ctrlMask  = 0x0000;        /*  No additional start and stop bits. */

    buf[0] = value;
    buf[1] = value >> 8;
    buf[2] = 0;
    buf[3] = 0;

    apiRetStatus = CyU3PI2cTransmitBytes (&preamble, buf, 4, 0);
	if (apiRetStatus == CY_U3P_SUCCESS)
	{
		IMX290_delay(800);
	}

    return apiRetStatus;
#endif
}

CyU3PReturnStatus_t
IMX290_SensorWrite1B (
        uint8_t highAddr,
        uint8_t lowAddr,
        uint8_t lowData)
{
    CyU3PReturnStatus_t apiRetStatus = CY_U3P_SUCCESS;
    CyU3PI2cPreamble_t  preamble;
    uint8_t buf[6];
    uint8_t i2c_slave_add;

    i2c_slave_add = 0x34; // imx230

    //CyU3PDebugPrint (4,"IMX290_SensorWrite1B: 0x%x, 0x%x, 0x%x \r\n", highAddr, lowAddr, lowData);

    /* Set the parameters for the I2C API access and then call the write API. */
    preamble.buffer[0] = i2c_slave_add; // address
    preamble.buffer[1] = highAddr; // write
    preamble.buffer[2] = lowAddr; // write
    preamble.length    = 3;             /*  Three byte preamble. */
    preamble.ctrlMask  = 0x0000;        /*  No additional start and stop bits. */

    buf[0] = lowData; //

    apiRetStatus = CyU3PI2cTransmitBytes (&preamble, buf, 1, 0);
	if (apiRetStatus == CY_U3P_SUCCESS)
	{
		IMX290_delay(800);
	}

    return apiRetStatus;
}

CyU3PReturnStatus_t
IMX290_SensorRead1B (
        uint8_t highAddr,
        uint8_t lowAddr,
        uint8_t *buf)
{
    CyU3PReturnStatus_t apiRetStatus = CY_U3P_SUCCESS;
    CyU3PI2cPreamble_t  preamble;
    uint8_t i2c_slave_add;

    i2c_slave_add = 0x35; // imx230

	preamble.buffer[1] = highAddr;
	preamble.buffer[2] = lowAddr;
	preamble.buffer[0] = i2c_slave_add-1; /* Slave address: Write operation */
	preamble.length = 3;
	preamble.ctrlMask = 0x0004;
    apiRetStatus = CyU3PI2cTransmitBytes (&preamble, buf, 3, 0);

	preamble.buffer[0] = i2c_slave_add; /* Slave address: Write operation */
	preamble.length = 1;
	preamble.ctrlMask = 0x0004;
	apiRetStatus = CyU3PI2cReceiveBytes (&preamble, buf, 2,0);
    return apiRetStatus;
}
void
IMX290_delay(int time)
{
    while (time--);
}

/********************************************************************************************
**                                    sensor initialization
********************************************************************************************/

/*
 * This function performs the Sensor reset.
 */
void
IMX290_sensor_reset(void)
{

	CyU3PReturnStatus_t apiRetStatus;

	/* Reset the sensor using the GPIO */

	CyU3PDebugPrint (4, "reset sensor1\n");

	/* Reset the Gpio to low */
	apiRetStatus = CyU3PGpioSetValue (1, CyFalse);
	if (apiRetStatus != CY_U3P_SUCCESS)
	{
		/* Error handling */
		CyU3PDebugPrint (4, "GPIO Set Value Error, Error Code = %d\n",apiRetStatus);
		return ;
	}

	/* Wait for some time */
	CyU3PThreadSleep(10);

	/* Set the Gpio to high */
	apiRetStatus = CyU3PGpioSetValue (0, CyTrue);//CyFalse
	if (apiRetStatus != CY_U3P_SUCCESS)
	{
		/* Error handling */
		CyU3PDebugPrint (4, "GPIO Set Value Error, Error Code = %d\n",apiRetStatus);
		return ;
	}

	CyU3PThreadSleep(100);

	return ;
}

// mode: 0: 5M output, 1: full size output, 2: 1336X1004 4 BIN
void IMX290_DRIVEMODE(uint8_t mode)
{
    uint16_t i;


		 for(i=0; i < sizeof(imx290_id02)/sizeof(unsigned short); i=i+2)
		 {
			 IMX290_SensorWrite1B(imx290_id02[i]>>8,imx290_id02[i]&0xff,imx290_id02[i+1]&0xff);
		 }

		 for(i=0; i < sizeof(imx290_id03)/sizeof(unsigned short); i=i+2)
		 {
			 IMX290_SensorWrite1B(imx290_id03[i]>>8,imx290_id03[i]&0xff,imx290_id03[i+1]&0xff);
		 }

		 for(i=0; i < sizeof(imx290_id04)/sizeof(unsigned short); i=i+2)
		 {
			 IMX290_SensorWrite1B(imx290_id04[i]>>8,imx290_id04[i]&0xff,imx290_id04[i+1]&0xff);
		 }

		 for(i=0; i < sizeof(imx290_id05)/sizeof(unsigned short); i=i+2)
		 {
			 IMX290_SensorWrite1B(imx290_id05[i]>>8,imx290_id05[i]&0xff,imx290_id05[i+1]&0xff);
		 }

		 for(i=0; i < sizeof(imx290_id06)/sizeof(unsigned short); i=i+2)
		 {
			 IMX290_SensorWrite1B(imx290_id06[i]>>8,imx290_id06[i]&0xff,imx290_id06[i+1]&0xff);
		 }

		 IMX290_SensorWrite1B(0x30,0x00,0x00);
		 IMX290_ChipID_Check();
}
void
IMX290_sensor_init(uint8_t usb_type)
{

    CyU3PReturnStatus_t apiRetStatus = CY_U3P_SUCCESS;

	ggusb_type = usb_type;

	IMX290_tc_mipi_bridge_dev_init(1);//MIPI to Parallel full size

	//IMX290_DRIVEMODE(0); // full size output
}

static void
IMX290_ChipID_Check(void)
	{
#if 1
    uint16_t sensorid;
	IMX290_SensorRead1B(0x30, 0x00, Buf);
	  sensorid= Buf[0];
	CyU3PDebugPrint(4, "imx230,Register 1 = 0x%x \n\r",sensorid);

	IMX290_SensorRead1B(0x30, 0x08, Buf);
	  sensorid= Buf[0];
	CyU3PDebugPrint(4, "imx230,Register 2 = 0x%x \n\r",sensorid);
#endif
	}
/*
Get the current brightness setting from the AP0100+MT9OV10640 sensor.
 */
uint8_t
IMX290_SensorGetBrightness (
        void)
{
	 return 0;
}

/*
   Update the brightness setting for the AP0100+MT9OV10640 sensor.
 */
void
IMX290_SensorSetBrightness (
        uint8_t brightness)
{
	 return ;
}
/*Contrast 16~64 for sensor,64~255 from UVC*/
/*
   Get the current contrast setting from the AP0100+MT9OV10640 sensor.
 */
uint8_t
IMX290_SensorGetContrast (
        void)
{
	 return 0;
}

/*
   Update the contrast setting for the AP0100+MT9OV10640 sensor,the min value is 16
 */
void
IMX290_SensorSetContrast (
        uint8_t contrast)
{
	 return ;
}
/*
   Get the current HUE setting from the AP0100+MT9OV10640 sensor,step by 256
 */
uint8_t
IMX290_SensorGetHUE (
        void)
{
	 return 0;
}

/*
   Update the HUE setting for the AP0100+MT9OV10640 sensor
 */
void
IMX290_SensorSetHUE (
        uint8_t HUE)
{
	 return  ;
}
/*AWB AUTO Control */
uint8_t
IMX290_SensorGetAWB (
void )
{
	 return 0;
}
void
IMX290_SensorSetAWB (
        uint8_t enable)
{
	return ;
}
/*
   AWB AUTO Control
 */
uint16_t
IMX290_SensorGetAWB_TMP (
        void)
{
    return 0;
}
void
IMX290_SensorSetAWB_TMP (
        uint16_t tmp)
{
	return ;
}
/*
  Saturation Control
 */
uint8_t
IMX290_SensorGetSaturation (
        void)
{
	return 0;
}
void
IMX290_SensorSetSaturation (
        uint8_t tmp)
{
	return ;
}
/*
  Sharpness Control
 */
uint8_t
IMX290_SensorGetSharpness (
        void)
{
	return 0;
}
void
IMX290_SensorSetSharpness (
        uint8_t tmp)
{
	return ;
}
/*
  Gamma Control
 */
uint8_t
IMX290_SensorGetGamma (
        void)
{
	return 0;
}
void
IMX290_SensorSetGamma (
        uint8_t tmp)
{
	return ;
}

/*
  Gain Control
 */
uint8_t
IMX290_SensorGetGain (
        void)
{
	 uint8_t buf[2];

	    IMX290_SensorRead1B (0x30, 0xB0,buf);

	    return (uint8_t)(buf[1]&0x30);
}
void
IMX290_SensorSetGain (
        uint8_t tmp)
{
		uint8_t buf[2];
	    uint8_t gain_low;
	    uint8_t gain_h2;

	    if(tmp>64)tmp=64;
	    gain_h2 = (tmp*10)>>8;
	    gain_low = (tmp*10)&0xff;

	    IMX290_SensorWrite1B (0x30, 0x14,gain_low);
	    IMX290_SensorWrite1B (0x30, 0x15,gain_h2);

	    CyU3PThreadSleep(1);
}
/*
  Backlight Control
 */
uint8_t
IMX290_SensorGetBacklight (
        void)
{
	return 0;
}
void
IMX290_SensorSetBacklight (
        uint8_t tmp)
{

return ;

}

/*
  AE Mode Control
 */
uint8_t
IMX290_SensorGetAEMode (
void )
{
	return 0;
}
void
IMX290_SensorSetAEMode (
        uint8_t enable)
{
	return;
}

/*
  Exposuretime Control
 */
uint16_t
IMX290_SensorGetExposuretime (
        void)
{
	return 0;
}
void
IMX290_SensorSetExposuretime (
        uint16_t tmp)
{
    if(tmp<1125)
    {
    	tmp = 1125-tmp;

    IMX290_SensorWrite1B (0x30, 0x20, tmp&0xff);// CAM_EXP_CTRL_COARSE_INTEGRATION_TIME
    IMX290_SensorWrite1B (0x30, 0x21, (tmp>>8)&0xff);// CAM_EXP_CTRL_COARSE_INTEGRATION_TIME
    IMX290_SensorWrite1B (0x30, 0x22, (tmp>>16)&0xff);// CAM_EXP_CTRL_COARSE_INTEGRATION_TIME
    }else//long exposure
    {

       IMX290_SensorWrite1B (0x30, 0x18, tmp&0xff);// CAM_EXP_CTRL_COARSE_INTEGRATION_TIME
       IMX290_SensorWrite1B (0x30, 0x19, (tmp>>8)&0xff);// CAM_EXP_CTRL_COARSE_INTEGRATION_TIME
       IMX290_SensorWrite1B (0x30, 0x1a, (tmp>>16)&0xff);// CAM_EXP_CTRL_COARSE_INTEGRATION_TIME

      //tmp = tmp - 1100;
      //fixed to 2
      IMX290_SensorWrite1B (0x30, 0x20, 2);// CAM_EXP_CTRL_COARSE_INTEGRATION_TIME
      IMX290_SensorWrite1B (0x30, 0x21, 0);// CAM_EXP_CTRL_COARSE_INTEGRATION_TIME
      IMX290_SensorWrite1B (0x30, 0x22, 0);// CAM_EXP_CTRL_COARSE_INTEGRATION_TIME


    }

    CyU3PThreadSleep(1);
}

/*
   Power Line Frequency Control,UVC protocal,1:50Hz;2:60Hz
 */
uint8_t
IMX290_SensorGetPowerLineFreq (
void )
{
	return 0;
}
void
IMX290_SensorSetPowerLineFreq (
        uint8_t enable)
{
	return;
}
uint8_t
IMX290_SensorGetSensorMode(void)
{
	return 0;
}
void IMX290_GetRGBGain(uint16_t *rGain, uint16_t *grGain, uint16_t *gbGain, uint16_t *bGain)
{
	// TBD
	*rGain = 0;
	*grGain = 0;
	*gbGain = 0;
	*bGain = 0;
}

void IMX290_SetWindow(uint16_t startX,uint16_t startY,uint16_t endX,uint16_t endY)
{

	IMX290_DRIVEMODE(0); // 5M output

   return ;

}
void IMX290_StreamEn(uint8_t enable)
{
//	uint8_t buf[2];

}

void IMX290_SetRGBGain(uint16_t rGain, uint16_t grGain, uint16_t gbGain, uint16_t bGain)
{
	//TBD
}
/*
void IMX290_Snapshot_MODE(uint8_t enable)
{

	if(enable)
	{
		IMX290_SensorWrite2B(SENSOR_ADDR_WR, 0x30, 0x1A, 0x19, 0xCA);// 2 8 11,
	}else
	{
		IMX290_SensorWrite2B(SENSOR_ADDR_WR, 0x30, 0x1A, 0x10, 0xDC);//from 0x10dc
	}

}*/

void IMX290_setIRSwitch(uint8_t switchOn)
{
#if 0
    CyU3PReturnStatus_t apiRetStatus=CY_U3P_SUCCESS;
	if(switchOn)
	{
		apiRetStatus = CyU3PGpioSetValue (IRSWITCHER_OUT_1, CyFalse);
		if (apiRetStatus != CY_U3P_SUCCESS)
		{
			/* Error handling */
			CyU3PDebugPrint (4, "STROBE GPIO Set Value Error, Error Code = %d\r\n",apiRetStatus);
		}
		apiRetStatus = CyU3PGpioSetValue (IRSWITCHER_OUT_2, CyTrue);
		if (apiRetStatus != CY_U3P_SUCCESS)
		{
			/* Error handling */
			CyU3PDebugPrint (4, "STROBE GPIO Set Value Error, Error Code = %d\r\n",apiRetStatus);
		}
	}
	else
	{
		apiRetStatus = CyU3PGpioSetValue (IRSWITCHER_OUT_1, CyTrue);
		if (apiRetStatus != CY_U3P_SUCCESS)
		{
			/* Error handling */
			CyU3PDebugPrint (4, "STROBE GPIO Set Value Error, Error Code = %d\r\n",apiRetStatus);
		}
		apiRetStatus = CyU3PGpioSetValue (IRSWITCHER_OUT_2, CyFalse);
		if (apiRetStatus != CY_U3P_SUCCESS)
		{
			/* Error handling */
			CyU3PDebugPrint (4, "STROBE GPIO Set Value Error, Error Code = %d\r\n",apiRetStatus);
		}
	}
#endif
}
