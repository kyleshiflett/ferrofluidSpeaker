#ifndef __H__GPIODRIVER__
#define __H__GPIODRIVER__

#include "../includes/pigpio.h"
#include <iostream>

class GpioDriver
{
    
    public:
    // returns singular instance of GpioDriver
    static GpioDriver * getSingletonInstance(void);
    void testGpioPin(int gpioPin);
    bool cleanUpPins();

    private:
    // Constructor for singleton class
    
    GpioDriver();
};

#endif