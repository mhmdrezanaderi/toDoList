#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"

#include "QFrame"
#include "QLabel"
#include "QPushButton"
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


void MainWindow::createButtons(){
    QFrame *f1 ;
    QPushButton *a;

     QGridLayout *l = new QGridLayout;
      QWidget *h = new QWidget;
    for(int i=0;i<31;i++){
         f1 = new QFrame();

        a= new QPushButton();


        a->setText(QString::number(i+1));

        if(i>=0 && i<=6){
            l->addWidget(a,0,i);
        }
        else if(i>=7 && i<=13)
        {
            int j=i;
            j-=7;
            l->addWidget(a,1,j);
        }
        else if(i>=14 && i<=20)
        {
            int j=i;
            j-=14;
            l->addWidget(a,2,j);
        }
        else if(i>=21 && i<=27)
        {
            int j=i;
            j-=21;
            l->addWidget(a,3,j);
        }
        else
        {
            int j=i;
            j-=28;
            l->addWidget(a,4,j);
        }

    }


    h->setLayout(l);
     h->setGeometry(100,830,100,100);
    h ->show();
}

void MainWindow::on_pushButton_2_clicked()
{


//    QPushButton *b = new QPushButton("index");
//
//    l->addWidget(b);
//    a->setLayout(l);
    createButtons();

}


