#include <iostream>
#include "ui_mainwindow.h"
#include "QString"
#include "QLabel"
#include "QPushButton"
#include "QMessageBox"
#include "mainwindow.h"

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

// create treewidget
void MainWindow::displayTree()
{
    ui->treeWidget->setColumnCount(5);
    QStringList lables;
    lables << "Title" <<"DueDate"<< "Description"<< "Priority" << "status";
    ui->treeWidget->setHeaderLabels(lables);
}


// get data from title , status , description , priority and time and set into treewidget
void MainWindow::on_Save_clicked()

{
    dayMain= s.day;
    monthMain =s.month;
    yearMain =s.year;
    title = ui->lineEdit->text();
    status = "Undone";
    description = ui->descriptioText->toPlainText();
    priority = ui->Priority->currentText();
    time = dayMain+"/"+monthMain+"/"+yearMain;
    QTreeWidgetItem *a= new QTreeWidgetItem(ui->treeWidget);

     // if we have null var
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

// a button that users can delete every task that thay don't need
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


// a button that show a basic calendar to set date for every task
void MainWindow::on_pushButton_2_clicked()
{
    s.show();
}



// if user click on task must be done
void MainWindow::on_Done_clicked()
{
    if(b->isSelected())
    {
         b->setText(4,"Done");
    }
}




// button that show a calendar to user

void MainWindow::on_Calender_clicked()
{
    // send day, month, yaer and title of every task and change ui of that day
    work.changeUi(dayMain.toInt(),s.monthInt,yearMain.toInt(),title);
    work.show();
}


//we use slot and signal when user click on button(task)
