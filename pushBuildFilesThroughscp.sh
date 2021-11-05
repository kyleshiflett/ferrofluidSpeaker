#!/bin/bash

TARGET=/home/pi/ferrofluidspeaker
INC=""
LIBPATH=""

echo "Copying ferrofluid.exe to pi..."
scp Out/ferrofluid.exe pi@raspberrypi.local:$TARGET
echo "Finished"
