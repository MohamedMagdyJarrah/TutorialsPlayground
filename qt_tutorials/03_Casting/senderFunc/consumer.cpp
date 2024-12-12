#include "consumer.h"

consumer::consumer(QObject *parent)
    : QObject{parent}
{}

void consumer::testing()
{
    producer* p = qobject_cast<producer*>(sender());
    if(!p) return;
    qInfo() << "Sender:" << p << p->objectName();
}
