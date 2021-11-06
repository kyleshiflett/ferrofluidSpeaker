/*************************************
*             Includes               * 
*************************************/

#include "../includes/GpioDriver.hpp"

/*************************************
*          Public Functions          * 
*************************************/

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
    if (0 <= gpioPin && gpioPin <= 53)
    {
        gpioSetMode(gpioPin, PI_OUTPUT);

        for (int i = 0; i < 100; i++)
        {
            gpioWrite(gpioPin,0);
            time_sleep(0.1);
            gpioWrite(gpioPin,1);
            time_sleep(0.1);
        }
    }
}

bool GpioDriver::cleanUpPins()
{
    std::cout << "cleaning up pins..." << std::endl;
    return true;
}