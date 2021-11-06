#ifndef __H__BLUETOOTH__DRIVER__
#define __H__BLUETOOTH__DRIVER__

/*************************************
*             Includes               * 
*************************************/


/*************************************
*          Public Functions          * 
*************************************/

class BluetoothDriver
{
    public:

    // Constructor
    BluetoothDriver_Create();
    void BluetoothDriver_Destroy();

    bool BluetoothDriver_isStarted();
    void BluetoothDriver_start();
    void BluetoothDriver_stop();
};

#endif