#!/bin/bash

TARGET=/home/pi/ferrofluidspeaker
INC=""
LIBPATH=""
BUILDOUT=/home/kyle/Documents/ferrofluidSpeaker/Build/Out/

echo "Copying main.exe"

scp $BUILDOUT/ferrofluid.exe pi@raspberrypi.local:$TARGET
