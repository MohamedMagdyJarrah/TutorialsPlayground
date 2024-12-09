#include "destination.h"

Destination::Destination(QObject *parent)
    : QObject{parent}
{
    qInfo() << "Destination is construcred";
}

Destination::~Destination()
{
    qInfo() << "Destination is destructored";
}

void Destination::mySlot(QString message)
{
    qInfo() << "[Destination] Hello, I recieved from the source this message:" << message;
}
