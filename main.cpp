#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //create main page
    MainWindow w;
    w.setGeometry(100,100,1176,625);
    w.show();
    return a.exec();
}
