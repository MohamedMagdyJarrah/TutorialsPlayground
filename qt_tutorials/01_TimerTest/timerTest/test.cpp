#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent},m_count{0}
{
    connect(&m_timer,&QTimer::timeout,this,&Test::timeout);
    m_timer.setInterval(1000);
    m_timer.start();
}

void Test::timeout()
{
    m_count++;
    qInfo() << "[Timer] Timeout called";
    if(m_count == 3){
        m_timer.stop();
        qInfo() << "[Timer] Stopped after" << m_count << "seconds";
    }
}
