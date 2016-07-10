#include "shiftinterface.h"
#include <wiringPi.h>

ShiftInterface::ShiftInterface(int OEPrime, int SH_CLK, int SH_LCK)
{
    this->OE_Prime = OEPrime;
    this->SH_CLK = SH_CLK;
    this-> SH_LCK = SH_LCK;


}
ShiftInterface::~ShiftInterface()
{
    digitalWrite(this->OE_Prime, LOW);
}
void ShiftInterface::InitGPIO()
{
    wiringPiSetup();
    pinMode(this->OE_Prime, OUTPUT);
    pinMode(this->SH_CLK, OUTPUT);
    pinMode(this->SH_LCK, OUTPUT);
}
