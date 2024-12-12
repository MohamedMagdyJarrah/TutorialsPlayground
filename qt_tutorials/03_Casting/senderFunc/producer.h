#ifndef PRODUCER_H
#define PRODUCER_H

#include <QObject>

class producer : public QObject
{
    Q_OBJECT
public:
    explicit producer(QObject *parent = nullptr);
    void do_test();

signals:
    void test();
};

#endif // PRODUCER_H
