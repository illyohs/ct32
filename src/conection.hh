#pragma once

#include <string>
#include <serial/serial.h>

class Connection
{
    private:
        std::string _device;
        int _baudrate;
        serial::Serial _serial;

    public:
        Connection(std::string device, int baudrate, int timeout);
        ~Connection();
        std::string getDevice();
        int getBaudRate();
        serial::Serial getSerial();
};