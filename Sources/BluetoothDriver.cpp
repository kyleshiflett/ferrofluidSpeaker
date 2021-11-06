/*************************************
*             Includes               * 
*************************************/

#include "../includes/BluetoothDriver.hpp"

#include <iostream>

/*************************************
*             Variables              * 
*************************************/

using namespace std;

/*************************************
*          Public Functions          * 
*************************************/

BluetothDriver::BluetothDriver_Create()
{
    cout << "BluetothDriver Created" << endl;
}
    
void BluetothDriver::BluetothDriver_Destroy()
{
    cout << "BluetothDriver Destroyed" << endl;
}

bool BluetothDriver::BluetothDriver_isStarted()
{
    cout << "BluetothDriver isStared" << endl;
    return true;
}

void BluetothDriver::BluetothDriver_start()
{
    cout << "BluetothDriver Started" << endl;
}

void BluetothDriver::BluetothDriver_stop()
{
    cout << "BluetothDriver Stopped" << endl;
}