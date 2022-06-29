#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "QPushButton"
#include <QMainWindow>
#include <QTreeWidgetItem>
#include <QDebug>
#include <QModelIndex>
#include "calender.h"
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
    Calender s;
    QString dayMain;
    QString monthMain;
    QString yearMain;
    QTreeWidgetItem *b= new QTreeWidgetItem();
private slots:
    void on_Save_clicked();
    void on_DeletTask_clicked();
    void on_pushButton_2_clicked();


private:

    Ui::MainWindow *ui;
    void displayTree();
};
#endif // MAINWINDOW_H
