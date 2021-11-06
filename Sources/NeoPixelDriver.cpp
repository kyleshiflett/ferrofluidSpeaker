/*************************************
*             Includes               * 
*************************************/

#include "../includes/NeoPixelDriver.hpp"

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

        