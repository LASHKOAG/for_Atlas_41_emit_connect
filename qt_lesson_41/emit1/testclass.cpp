#include "testclass.h"

TestClass::TestClass(QObject *parent) : QObject(parent)
{
    connect(this, &TestClass::signalValueChanged, this, &TestClass::getSignalV1);
    connect(this, &TestClass::signalValue2Changed, this, &TestClass::getSignalV2);
    connect(this, &TestClass::signalHello, this, &TestClass::getSignalHello);
    connect(this, &TestClass::signalHello225, this, &TestClass::getSignalHello225);
}

void TestClass::someAction()
{
    int result_action = 5;
    m_value = result_action;
    emit signalValueChanged();
    qDebug() << "signalValueChanged()";

    m_value1 = 100;
    emit signalValue2Changed();
    qDebug() << "signal2ValueChanged()";
}

void TestClass::makeUser(int user_data)
{
    switch (user_data) {
    case 123:
        emit signalHello();
        break;
    case 225:
        emit signalHello225();
    default:
        break;
    }
}

void TestClass::getSignalV1()
{
    qDebug() << "getSignalV1()";
}

void TestClass::getSignalV2()
{
    qDebug() << "getSignalV2()";
}

void TestClass::getSignalHello()
{
    qDebug() << "Hello 123";
}

void TestClass::getSignalHello225()
{
    qDebug() << "Hello 225";
}
