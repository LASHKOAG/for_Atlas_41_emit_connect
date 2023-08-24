#ifndef TESTCLASS_H
#define TESTCLASS_H

#include <QObject>
#include <QDebug>

class TestClass : public QObject
{
    Q_OBJECT
public:
    explicit TestClass(QObject *parent = nullptr);
    void someAction();
    void makeUser(int user_data);

private:
    int m_value{0};
    int m_value1{0};

signals:
    void signalValueChanged();
    void signalValue2Changed();
    void signalHello();
    void signalHello225();

public slots:
    void getSignalV1();
    void getSignalV2();
    void getSignalHello();
    void getSignalHello225();
};

#endif // TESTCLASS_H
