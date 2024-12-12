#include <QCoreApplication>
#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test t;
    QTimer quitAppTimer;
    QObject::connect(&quitAppTimer,&QTimer::timeout,&a,&QCoreApplication::quit);
    quitAppTimer.setInterval(4000);
    quitAppTimer.start();

    return a.exec();
}
