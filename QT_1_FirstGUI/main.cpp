 /***********************************************************
 *Description : The first GUI widget appliocation , QT__HelloWorld is Qmake project, this is GUI application
 *
 * Language: C++
 *
 *
 * Author: Nikhil Gowda Shivaswamy
 *          Master of Engineering in Information Technology
 ************************************************************/

#include "mywindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWindow w;
    w.show();
    return a.exec();
}
