#include "mainwindow.h"
#include <iostream>
#include "ui_mainwindow.h"
#include "QString"
#include "QDebug"
#include "QFrame"
#include "QLabel"
#include "QPushButton"
#include "QMessageBox"
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
    ui->treeWidget->setColumnCount(5);
    QStringList lables;
    lables << "Title" <<"DueDate"<< "Description"<< "Priority" << "status";
    ui->treeWidget->setHeaderLabels(lables);
}

void MainWindow::on_Save_clicked()

{
//    aui->treeWidget;
    dayMain= s.day;
    monthMain =s.month;
    yearMain =s.year;
    title = ui->lineEdit->text();
    status = "Undone";
    description = ui->descriptioText->toPlainText();
    priority = ui->Priority->currentText();
    time = dayMain+"/"+monthMain+"/"+yearMain;
    QTreeWidgetItem *a= new QTreeWidgetItem(ui->treeWidget);


    if(title !="" && description!="" && priority !="None")
    {
        qDebug() << ui->Priority->currentText();
        a->setText(0,title);
        a->setText(1,time);
        a->setText(2,description);
        a->setText(3,priority);
        a->setText(4,status);
        ui->treeWidget->addTopLevelItem(a);
        b=a;
        ui->addTaskBox->close();

    }



}

void MainWindow::on_DeletTask_clicked()
{

    if(b->isSelected())
    {
         qDebug() <<  ui->treeWidget->currentIndex().row();
    }


    QTreeWidgetItem* Resource = ui->treeWidget->currentItem();

       if(Resource->isSelected())
       {
           ui->treeWidget->takeTopLevelItem(ui->treeWidget->currentIndex().row());
           ui->treeWidget->removeItemWidget(Resource,ui->treeWidget->currentIndex().row());
           Resource->setExpanded(true);
       }
}

void MainWindow::on_pushButton_2_clicked()
{

    s.show();

}




void MainWindow::on_pushButton_clicked()
{
    if(b->isSelected())
    {
          b->setText(4,"Done");
    }




}

