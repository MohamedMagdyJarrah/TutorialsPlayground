#ifndef SOURCE_H
#define SOURCE_H

#include <QObject>
#include <QDebug>

class Source : public QObject
{
    Q_OBJECT
public:
    explicit Source(QObject *parent = nullptr);
    ~Source();

signals:
    void mySignal(QString message);
};

#endif // SOURCE_H
