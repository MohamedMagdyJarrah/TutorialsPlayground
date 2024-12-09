#include <QCoreApplication>
#include <QDebug>
#include "source.h"
#include "destination.h"

void connectSignalTest(Source* s,Destination* d){
    QObject::connect(s,&Source::mySignal,d,&Destination::mySlot);
}

void emitSignalTest(Source* s){
    emit s->mySignal("Signal and Slots tested successfully");
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Source* s = new Source();
    Destination* d = new Destination();

    connectSignalTest(s,d);
    emitSignalTest(s);


    delete s;
    delete d;
    return a.exec();
}
