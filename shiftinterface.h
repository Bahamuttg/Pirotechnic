#ifndef SHIFTINTERFACE_H
#define SHIFTINTERFACE_H

#include <wiringPi.h>

class ShiftInterface
{
private:


    void InitGPIO ();
    void WriteShift(int );

public:
    int SR_CLK;
    int SER_DATA;
    int RCLK_LATCH;
    int PIN_COUNT;

    ShiftInterface(int SRCLK, int SER, int RCLK, int PINCOUNT);
    ~ShiftInterface();
    void WriteShift(int[]);
};
#endif
