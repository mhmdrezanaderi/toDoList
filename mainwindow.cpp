#include "mainwindow.h"
#include <iostream>
#include "ui_mainwindow.h"
#include "QString"
#include "QDebug"
#include "QFrame"
#include "QLabel"
#include "QPushButton"
using namespace std ;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->addTaskBox->hide();
    ui->tasklayout->hide();
    displayTree();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayTree()
{
    ui->treeWidget->setColumnCount(4);
    QStringList lables;
    lables << "Title" <<"DueDate"<< "Description"<< "Priority";
    ui->treeWidget->setHeaderLabels(lables);
}

void MainWindow::on_Save_clicked()
{
    QString title = ui->lineEdit->text();
    QString description = ui->descriptioText->toPlainText();
    QString priority = ui->Priority->currentText();
    if(title !="" && description!=""&& priority !="none")
    {
        QTreeWidgetItem *a= new QTreeWidgetItem(ui->treeWidget);
        a->setText(0,title);
        a->setText(2,description);
        a->setText(3,priority);
        ui->treeWidget->addTopLevelItem(a);
    }


}

void MainWindow::on_DeletTask_clicked()
{
   ui->treeWidget->currentIndex();
}


void MainWindow::on_pushButton_2_clicked()
{



}


