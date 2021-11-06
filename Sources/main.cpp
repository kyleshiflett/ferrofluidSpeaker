
#include "../includes/NeoPixelDriver.hpp"
#include "../includes/GpioDriver.hpp"

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char * argv[])
{
  LedProperties Neo;
  GpioDriver GpioDrv;
  int indexArg = 0;

  if (argc >= 2)
  {
    indexArg = stoi(argv[1]);
  }

  for (int i = 2; i < NUM_NEOPIXEL; i++)
  {
    Neo.setLedIndex(i);
    cout << "index: " << Neo.getLedIndex() << " color: " << Neo.getLedColor(i) << endl;
  }

  GpioDrv.testGpioPin(indexArg);


  GpioDrv.cleanUpPins();
  return 0;
}