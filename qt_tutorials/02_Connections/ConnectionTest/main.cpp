#include <QCoreApplication>
#include "owner.h"
#include "dog.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Owner owner;
    Dog dog;

    QObject::connect(&owner,&Owner::treat,&dog,&Dog::treat);
    // by default the connection is Auto which will emit signal with every connect
    // for(int i=0; i<3 ;i++){
    //     QObject::connect(&owner,&Owner::treat,&dog,&Dog::treat);
    // }

    // Queued Connection specific for threads but in this application will act the same as auto connection
    // for(int i=0; i<3 ;i++){
    //     QObject::connect(&owner,&Owner::treat,&dog,&Dog::treat,Qt::QueuedConnection);
    // }

    // To avoid this and emit only with the first commit use unique connection
    for(int i=0; i<3 ;i++){
        QObject::connect(&owner,&Owner::treat,&dog,&Dog::treat,Qt::UniqueConnection);
    }

    owner.giveTreats();

    return a.exec();
}
