#ifndef CONSUMER_H
#define CONSUMER_H

#include <QObject>
#include <QDebug>
#include "producer.h"

class consumer : public QObject
{
    Q_OBJECT
public:
    explicit consumer(QObject *parent = nullptr);

signals:

public slots:
    void testing();
};

#endif // CONSUMER_H
