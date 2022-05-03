/*************************************
*             Includes               * 
*************************************/

#include "../includes/GpioDriver.hpp"

/*************************************
*          Function Defines          * 
*************************************/

static uint8_t helperGreenFunc(void);
static uint8_t helperRedFunc(void);
static uint8_t helperBlueFunc(void);
static void outputPixelrgb(uint32_t pixel);
static void helperSendbit(bool high);

/*************************************
*          Private Variables         * 
*************************************/

static GpioDriver * instance;

/*************************************
*          Public Functions          *
*************************************/
GpioDriver * GpioDriver::getSingletonInstance(void)
{
    if (!instance)
    {
       instance = new GpioDriver;
    }
    
    return instance;
}

GpioDriver::GpioDriver()
{
    int err = gpioInitialise();
    if (!err)
    {
        std::cout << "initialize failed: " << std::endl;
    }
    
    std::cout << "initialize success: " << std::endl;
}

void GpioDriver::testGpioPin(int gpioPin)
{
    // temp testing funciton
    if (0 <= gpioPin && gpioPin <= 32)
    {
        gpioSetMode(gpioPin, PI_ALT0);
        // gpioSetISRFunc
        gpioHardwarePWM(gpioPin, 800000,480000);

        uint32_t pixelOut = 0;
        pixelOut = (helperGreenFunc() << 15) |
                    (helperRedFunc() << 7) |
                    helperBlueFunc();


        for (int i = 0; i < 50; i++)
        {
            for (int i = 0; i < 60; i++)
            {
                gpioHardwarePWM(12, 800000,0);
                time_sleep(0.00005);
                gpioHardwarePWM(gpioPin, 800000,480000);
                time_sleep(0.00006);
            }
        }

        // gpioHardwarePWM(12, 800000,0);
        
        // for (int i = 0; i < 100; i++)
        // {
            
        //     gpioWrite(gpioPin,1);
        //     time_sleep(0.000005);
        // }
    }
}

static void helperSendbit(bool high)
{
    if (high)
    {
        gpioHardwarePWM(12, 400000,480000);
        //time_sleep(0.0000025);
    }
    else
    {
        // gpioHardwarePWM(12, 400000,200000);
        //time_sleep(0.0000025);
    }
    
}

static uint8_t helperGreenFunc(void)
{
    return 0b11110000;
}

static uint8_t helperRedFunc(void)
{
    return 0b00001001;
}

static uint8_t helperBlueFunc(void)
{
    return 0b10010000;
}

static void outputPixelrgb(uint32_t pixel)
{

}

bool GpioDriver::cleanUpPins()
{
    std::cout << "cleaning up pins..." << std::endl;
    return true;
}