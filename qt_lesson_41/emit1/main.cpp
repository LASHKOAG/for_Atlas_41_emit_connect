#include <QCoreApplication>
#include "testclass.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    TestClass* testClass = new TestClass();

    testClass->someAction();
    int number;
    while (true)
    {
        std::cin >> number;
        qDebug() << number;
        testClass->makeUser(number);
    }

    return a.exec();
    //if ... delete
}
