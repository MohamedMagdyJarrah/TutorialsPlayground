#include <QCoreApplication>
#include "producer.h"
#include "consumer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    producer p;
    consumer c;

    QObject::connect(&p,&producer::test,&c,&consumer::testing);

    p.setObjectName("Baby Shark");
    p.do_test();

    return a.exec();
}
