*** Ferrofluid Speaker Project ***
Repository for Ferrofluid speaker project

*** Installing GPIO library ***
http://abyz.me.uk/rpi/pigpio/index.html
Library used for general peripheral control 

1. Follow the above link and install most recent pigpio on target raspberry device

*** Github link to toolchain ***
https://github.com/Pro/raspi-toolchain

1. follow instructions to install pre-built toolchain locally on your computer

*** Building and Compiling ***
NOTE :  If using Visual Studio Code the commands listed below can be run through tasks.json with
        CTRL+SHIFT+P and selecting "Tasks: Run Tasks" then choosing the desired command

*** Compiling with toolchain ***

1. Navigate to the build directory
2. Export the following environmental variables...
        export RASPBIAN_ROOTFS=$HOME/rpi/rootfs
        export PATH=/opt/cross-pi-gcc/bin:/opt/cross-pi-gcc/libexec/gcc/arm-linux-gnueabihf/8.3.0:$PATH
        export RASPBERRY_VERSION=1

3. Run the CMake command
        cmake -DCMAKE_TOOLCHAIN_FILE=$../Toolchain-rpi.cmake -DCMAKE_BUILD_TYPE=RelWithDebInfo ../Source

NOTE:   After compiling with CMake the generated makefiles will not need to be updated until a new file
        directory, folder, or new type of library is is added. At which point the build directory should
        be removed and CMake ran again.

*** Building the final Binaries ***

1. After CMake has run navigate to ./build
2. run command make

*** Pushing binaries to raspberrypi ***
1. run ./pushBuildFilesThroughscp.sh