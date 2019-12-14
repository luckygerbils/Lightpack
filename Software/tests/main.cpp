
#include <QtTest/QtTest>
#include "LightpackApiTest.hpp"
#include "GrabCalculationTest.hpp"
#include "lightpackmathtest.hpp"
#include "HooksTest.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QTEST_DISABLE_KEYPAD_NAVIGATION
    QApplication app(argc, argv);

    QList<QObject *> tests;
    QStringList summary;

//    tests.append(new GrabCalculationTest());
//    tests.append(new HooksTest());
//    tests.append(new LightpackMathTest());
    tests.append(new LightpackApiTest());


    for(int i=0; i < tests.size(); i++) {
        if (QTest::qExec(tests[i], argc, argv)) {
            summary << QString(tests[i]->metaObject()->className()).append("\tFAILED");
        } else {
            summary << QString(tests[i]->metaObject()->className()).append("\tPASSED");
        }
        delete tests[i];
    }

    for (int i = 0; i < summary.size(); ++i)
        cout << endl << summary.at(i).toLocal8Bit().constData() << endl;

    return 0;
}
