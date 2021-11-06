#ifndef __H__GPIODRIVER__
#define __H__GPIODRIVER__

#include "../includes/pigpio.h"
#include <iostream>

class GpioDriver
{
    public:

    // Constructor
    GpioDriver();
    void testGpioPin(int gpioPin);
    bool cleanUpPins();
};

#endif