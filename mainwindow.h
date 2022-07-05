#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "QPushButton"
#include <QMainWindow>
#include <QTreeWidgetItem>
#include <QDebug>
#include <QModelIndex>
#include "calender.h"
#include "showWorks.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void createButtons();

    // ye object az calendar baraye gereftan date baraye har task
    Calender s;
    QString dayMain;
    QString monthMain;
    QString yearMain;
    QString title ;
    QString status ;
    QString description ;
    QString time;
    QString priority;
    QTreeWidgetItem *b= new QTreeWidgetItem();
    //create a calendar to show every day that user have task in current month and current year
    showWorks work;

private slots:
    void on_Save_clicked();
    void on_DeletTask_clicked();
    void on_pushButton_2_clicked();
    void on_Done_clicked();
    void on_Calender_clicked();
private:

    Ui::MainWindow *ui;
    void displayTree();
};
#endif // MAINWINDOW_H
