//
// SerialClass from the Arduino CPPWindows setup
// Modified from original source: https://playground.arduino.cc/Interfacing/CPPWindows/
//

#ifndef MERCURY_SHELVES_MANAGER_SERIAL_H
#define MERCURY_SHELVES_MANAGER_SERIAL_H

#define ARDUINO_WAIT_TIME 2000

#include <windows.h>
#include <cstdio>
#include <cstdlib>

class Serial
{
private:
    //Serial comm handler
    HANDLE hSerial;
    //Connection status
    bool connected;
    //Get various information about the connection
    COMSTAT status{};
    //Keep track of last error
    DWORD errors{};

public:
    //Initialize Serial communication with the given COM port
    explicit Serial(const char *portName);
    //Close the connection
    ~Serial();
    //Read data in a buffer, if nbChar is greater than the
    //maximum number of bytes available, it will return only the
    //bytes available. The function return -1 when nothing could
    //be read, the number of bytes actually read.
    int ReadData(char *buffer, unsigned int nbChar);
    //Writes data from a buffer through the Serial connection
    //return true on success.
    bool WriteData(const char *buffer, unsigned int nbChar);
    //Check if we are actually connected
    [[nodiscard]] bool IsConnected() const;


};


#endif//MERCURY_SHELVES_MANAGER_SERIAL_H
