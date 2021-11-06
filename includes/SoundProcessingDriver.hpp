#ifndef __H__SOUND__PROCESSING__DRIVER__
#define __H__SOUND__PROCESSING__DRIVER__

/*************************************
*             Includes               * 
*************************************/


/*************************************
*          Public Functions          * 
*************************************/

class SoundProcessingDriver
{
    public:

    // Constructor
    SoundProcessingDriver_Create();
    void SoundProcessingDriver_Destroy();

    bool SoundProcessingDriver_isStarted();
    void SoundProcessingDriver_start();
    void SoundProcessingDriver_stop();
};

#endif