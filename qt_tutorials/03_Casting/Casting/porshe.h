#ifndef PORSHE_H
#define PORSHE_H

#include <QObject>
#include <QDebug>
#include "car.h"

class Porshe : public Car
{
public:
    explicit Porshe();
    void sound();

signals:
};

#endif // PORSHE_H
