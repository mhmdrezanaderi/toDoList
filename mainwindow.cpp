#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
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
    lables << "Title" <<"DueDate"<< "Description"<< "pri";
    ui->treeWidget->setHeaderLabels(lables);
}







void MainWindow::on_Save_clicked()
{
    QString s = ui->lineEdit->text();
    QTreeWidgetItem *a= new QTreeWidgetItem(ui->treeWidget);
    a->setText(0,s);
    ui->treeWidget->addTopLevelItem(a);
}

