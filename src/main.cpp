#include <cstdio>
#include <string>
#include "arduino/serial.h"


int main()
{
    auto* SP = new Serial("COM3");
    if (SP->IsConnected())
        printf("Smart Shelf connected!\n");
    char incomingData[256] = "";
    int readResult, dataLength = 255;
    while(SP->IsConnected())
    {
        readResult = SP->ReadData(incomingData,dataLength);
        incomingData[readResult] = 0;
        printf("%s",incomingData);
        Sleep(100);
    }
    return 0;
}