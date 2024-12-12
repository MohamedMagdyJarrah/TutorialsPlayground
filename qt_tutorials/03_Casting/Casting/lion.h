#ifndef LION_H
#define LION_H

#include <QObject>
#include <QDebug>

class Lion : public QObject
{
    Q_OBJECT
public:
    explicit Lion(QObject *parent = nullptr);
    void roar();

signals:
};

#endif // LION_H
