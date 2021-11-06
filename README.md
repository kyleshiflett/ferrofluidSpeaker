# ferrofluidSpeaker
Code written for ferrofluid speaker design


*** Installing GPIO library ***
http://abyz.me.uk/rpi/pigpio/index.html

1. Follow the above link and install most recent pigpio on target device

*** Github link to toolchain ***
https://github.com/Pro/raspi-toolchain

1. follow instructions to install pre-built toolchain

*** Compiling with toolchain ***

1. from current directory  

    cd Build
    export RASPBIAN_ROOTFS=$HOME/rpi/rootfs
    export PATH=/opt/cross-pi-gcc/bin:/opt/cross-pi-gcc/libexec/gcc/arm-linux-gnueabihf/8.3.0:$PATH
    export RASPBERRY_VERSION=1
    cmake -DCMAKE_TOOLCHAIN_FILE=$../Toolchain-rpi.cmake -DCMAKE_BUILD_TYPE=RelWithDebInfo ../Source
    make

*** Pushing binaries to raspberrypi ***
1. run ./pushBuildFilesThroughscp.sh