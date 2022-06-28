#include "mainwindow.h"
#include "calender.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    Calender s;
    s.show();

    w.setGeometry(100,100,1176,625);

    w.show();
    return a.exec();
}
