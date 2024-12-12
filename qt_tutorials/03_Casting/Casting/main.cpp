#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "porshe.h"
#include "lion.h"

void testCar(Car* car)
{
    car->move();
    car->stop();
}

void testPorsche(Porshe* porsche){
    porsche->move();
    porsche->sound();
    porsche->stop();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // dynamic casting
    qInfo() << "dynamic casting test 1";
    Porshe* porscheCar = new Porshe();
    Car* convertBasicCar = dynamic_cast<Car*>(porscheCar);
    if(convertBasicCar) testCar(convertBasicCar);

    // static casring
    qInfo() << "static casting test 1";
    Car* basicCar = new Car(&a);
    Porshe* convertToPorsche = static_cast<Porshe*>(basicCar);
    if(convertToPorsche) testPorsche(convertToPorsche);

    qInfo() << "static casting test 2";
    Porshe* basicPorsche = new Porshe();
    Car* covertToBasic = static_cast<Car*>(basicPorsche);
    if(covertToBasic) testCar(covertToBasic);


    return a.exec();
}
