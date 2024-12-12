#include "producer.h"

producer::producer(QObject *parent)
    : QObject{parent}
{}

void producer::do_test()
{
    emit test();
}
