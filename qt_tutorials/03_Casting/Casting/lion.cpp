#include "lion.h"

Lion::Lion(QObject *parent)
    : QObject{parent}
{}

void Lion::roar()
{
    qInfo() << "Lion roaring..";
}
