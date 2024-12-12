#include "car.h"

Car::Car(QObject *parent)
    : QObject{parent}
{}

void Car::move()
{
    qInfo() << "Car is moving...";
}

void Car::stop()
{
    qInfo() << "Car stopped";
}
