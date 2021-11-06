#ifndef __H__ELECTROMAGNET__DRIVER__
#define __H__ELECTROMAGNET__DRIVER__

/*************************************
*             Includes               * 
*************************************/


/*************************************
*          Public Functions          * 
*************************************/
class ElectromagnetDriver
{
    public:

    // Constructor
    ElectromagnetDriver_Create();
    void ElectromagnetDriver_Destroy();

    bool ElectromagnetDriver_isStarted();
    void ElectromagnetDriver_start();
    void ElectromagnetDriver_stop();
};

#endif