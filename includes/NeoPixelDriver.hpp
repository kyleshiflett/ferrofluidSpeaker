#ifndef __H__NEOPIXELDRIVER__
#define __H__NEOPIXELDRIVER__

#include <iostream>
#include <string>

#define NUM_NEOPIXEL 10

class LedProperties
{
    private:
    int currentIndex;
    std::string color;
    std::string colorarr[NUM_NEOPIXEL] = {"black","brown","red","yellow","orange","purple","green","grey","white","nac"};
    

    public:
    // Constructor
    LedProperties();

    /**
     * Get the current Neopixel index
     * 
     * @return neopixel index
     */
    int getLedIndex(void);

    /**
     * Set current neopixel index
     * 
     * @param index index of neopixel
     */
    void setLedIndex(int index);

    /**
     * Gets index of the first neopixel that matches color 
     * 
     * @param color color of neopixel
     * @return index of first neopixel, -1 on failure
     */
    int getFirstColorIndex(std::string color);

    /**
     * Gets the color of the current neopixel index
     * 
     * @param index index of neopixel
     * @return color of neopixel at index
     */
    std::string getLedColor(int index);

    /**
     * Sets color of neo pixel at current index 
     * 
     * @param color desired color to set at current index
     */
    void setLedColor(std::string color);
};

#endif