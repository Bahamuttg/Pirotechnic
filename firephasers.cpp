#include "firephasers.h"
#include <QThread>
#include <QtCore>
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

    //Initialize Shift bit push


    mutex.unlock();
}
