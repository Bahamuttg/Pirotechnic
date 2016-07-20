#ifndef FIREPHASERS_H
#define FIREPHASERS_H

#include <QThread>
#include "shiftinterface.h"

class FirePhasers : public QThread
{
    Q_OBJECT
public:
    explicit FirePhasers(QObject *parent = 0);

    bool StopThread;

    void run();

signals:
    void OnBeginCommitArray();
    void OnArrayCommited();
    void OnFireExecuted();
    void OnFireCompleted();

public slots:


};

#endif // FIREPHASERS_H
