/*************************************
*             Includes               * 
*************************************/

#include "../includes/NeoPixelDriver.hpp"

#include "../includes/pigpio.h"

/*************************************
*          Public Functions          * 
*************************************/

LedProperties::LedProperties()
{
    this->currentIndex = 0;
    this->color = "black";
}

int LedProperties::getLedIndex(void)
{
    return this->currentIndex;
}

void LedProperties::setLedIndex(int index)
{
    // temp testing funciton
    if (0 <= index && index <= 53)
    {
        int err = gpioInitialise();
        std::cout << "initialize return " << err << std::endl;

        err = gpioSetMode(index, PI_OUTPUT);

        std::cout << "setmode return " << err << std::endl;

        // for (int i = 0; i < 100; i++)
        // {
        //     gpioWrite(index,0);
        //     time_sleep(0.1);
        //     gpioWrite(index,1);
        //     time_sleep(0.1);
        // }
    }

    this->currentIndex = index;
}

int LedProperties::getFirstColorIndex(std::string color)
{
    for (int i = 0; i < NUM_NEOPIXEL; i++)
    {
        if(color.compare(this->color))
        {
            return i;
        }
    }
    return -1;
}

std::string LedProperties::getLedColor(int index)
{
    return this->colorarr[index];
};

void LedProperties::setLedColor(std::string color)
{
    this->colorarr[this->currentIndex] = color;
}

        