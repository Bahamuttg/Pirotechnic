#include "shiftinterface.h"
#include <wiringPi.h>

ShiftInterface::ShiftInterface(int SRCLK, int SER, int RCLK, int PINCOUNT)
{
    SR_CLK = SRCLK;
    SER_DATA = SER;
    RCLK_LATCH = RCLK;
    PIN_COUNT = PINCOUNT;

    InitGPIO();
}
ShiftInterface::~ShiftInterface()
{
    digitalWrite(SR_CLK, LOW);
    digitalWrite(SER_DATA, LOW);
    digitalWrite(RCLK_LATCH, LOW);
}

void ShiftInterface::InitGPIO()
{
       wiringPiSetup();
    //Define GPIO Pins
    pinMode(SR_CLK, OUTPUT);
    pinMode(SER_DATA, OUTPUT);
    pinMode(RCLK_LATCH, OUTPUT);
    //Init Pin States
    digitalWrite (SR_CLK,  LOW) ;
    digitalWrite (SER_DATA, LOW) ;
    digitalWrite (RCLK_LATCH, HIGH) ;
}
void ShiftInterface::WriteShift(int Data[])
{
    digitalWrite (RCLK_LATCH, LOW);
    delayMicroseconds (1);
    for (int i = (sizeof(Data)/sizeof(*Data)) - 1; i >= 0; --i)
    {
        digitalWrite (SER_DATA, Data[i]);

        digitalWrite (SR_CLK, HIGH);
        delayMicroseconds (1);
        digitalWrite (SR_CLK, LOW);
        delayMicroseconds (1);
    }
    digitalWrite (RCLK_LATCH, HIGH);
    delayMicroseconds (1);
}
