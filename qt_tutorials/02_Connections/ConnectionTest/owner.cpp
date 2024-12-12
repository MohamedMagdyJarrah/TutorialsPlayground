#include "owner.h"

Owner::Owner(QObject *parent)
    : QObject{parent}
{}

void Owner::giveTreats()
{
    qInfo() << __PRETTY_FUNCTION__;
    emit treat();
}
