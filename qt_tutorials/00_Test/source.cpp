#include "source.h"

Source::Source(QObject *parent)
    : QObject{parent}
{
    qInfo() << "Source is construcred";
}

Source::~Source()
{
    qInfo() << "Source is destructored";
}
