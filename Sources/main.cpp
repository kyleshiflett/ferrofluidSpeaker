#include <iostream>
#include "../includes/NeoPixelDriver.hpp"
using namespace std;

int main()
{
  LedProperties Neo;
  
  cout << "current color at index " << Neo.getLedIndex() << " is " << Neo.getLedColor(Neo.getLedIndex()) << endl;
  cout << "setting current index to 1..." << endl;

  Neo.setLedIndex(1);

  cout << "current color at index " << Neo.getLedIndex() << " is " << Neo.getLedColor(Neo.getLedIndex()) << endl;
  cout << "running through all remaining colors in index..." << endl;

  for (int i = 2; i < NUM_NEOPIXEL; i++)
  {
    Neo.setLedIndex(i);
    cout << "index: " << Neo.getLedIndex() << " color: " << Neo.getLedColor(i) << endl;
  }
  
  return 0;
}