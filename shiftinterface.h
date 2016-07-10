#ifndef SHIFTINTERFACE_H
#define SHIFTINTERFACE_H

#include <wiringPi.h>

class ShiftInterface
{
private:
    int OE_Prime;
    int SH_CLK;
    int SH_LCK;

public:
    ShiftInterface(int, int, int);
    ~ShiftInterface();
    void InitGPIO();

};

#endif // SHIFTINTERFACE_H
