#include <QThread>
#include <QtCore>
#include "shiftinterface.h"
#include "firephasers.h"

FirePhasers::FirePhasers(QObject *parent) :
    QThread(parent)
{

}

void FirePhasers::run()
{
    QMutex mutex;
    mutex.lock();
    //init
    if(this->StopThread)
        return;
    int bits[16] = {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1};

    //Initialize Shift bit push
    ShiftInterface *Shifter = new ShiftInterface(0,1,2,16);
    Shifter->WriteShift(bits);

    delete Shifter;

    mutex.unlock();
}
