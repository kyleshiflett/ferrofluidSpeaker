/*************************************
*             Includes               * 
*************************************/

#include "../includes/ElectromagnetDriver.hpp"

#include <iostream>

/*************************************
*             Variables              * 
*************************************/

using namespace std;

/*************************************
*          Public Functions          * 
*************************************/

ElectromagnetDriver::ElectromagnetDriver_Create()
{
    cout << "ElectromagnetDriver Created" << endl;
}
    
void ElectromagnetDriver::ElectromagnetDriver_Destroy()
{
    cout << "ElectromagnetDriver Destroyed" << endl;
}

bool ElectromagnetDriver::ElectromagnetDriver_isStarted()
{
    cout << "ElectromagnetDriver isStared" << endl;
    return true;
}

void ElectromagnetDriver::ElectromagnetDriver_start()
{
    cout << "ElectromagnetDriver Started" << endl;
}

void ElectromagnetDriver::ElectromagnetDriver_stop()
{
    cout << "ElectromagnetDriver Stopped" << endl;
}