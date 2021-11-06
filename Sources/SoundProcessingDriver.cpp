/*************************************
*             Includes               * 
*************************************/

#include "../includes/SoundProcessingDriver.hpp"

#include <iostream>

/*************************************
*             Variables              * 
*************************************/

using namespace std;

/*************************************
*          Public Functions          * 
*************************************/

SoundProcessingDriver::SoundProcessingDriver_Create()
{
    cout << "SoundProcessingDriver Created" << endl;
}
    
void SoundProcessingDriver::SoundProcessingDriver_Destroy()
{
    cout << "SoundProcessingDriver Destroyed" << endl;
}

bool SoundProcessingDriver::SoundProcessingDriver_isStarted()
{
    cout << "SoundProcessingDriver isStared" << endl;
    return true;
}

void SoundProcessingDriver::SoundProcessingDriver_start()
{
    cout << "SoundProcessingDriver Started" << endl;
}

void SoundProcessingDriver::SoundProcessingDriver_stop()
{
    cout << "SoundProcessingDriver Stopped" << endl;
}