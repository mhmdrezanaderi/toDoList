#include <QCalendarWidget>
#include <QDate>
#include <QApplication>
#include <QMessageBox>
#include "calender.h"
#include "QDialog"
#include <QDebug>

Calender::Calender(QWidget *parent)
    : QDialog(parent)
  , ui(new Ui::calender){
    ui->setupUi(this);


}



void Calender::on_setTime_clicked()
{

       day =  ui-> listWidget ->currentItem()->text();
       ui->ShowDay->setText(day);


       month = ui->comboBox->currentText();
        int monthInt=  ui->comboBox->currentIndex();

       if(monthInt!= 0)
       {
            ui ->ShowMonth -> setText(month);
       }
       else{
           QMessageBox::information(this,"Wrong","Please choose one month !");
       }



       year = ui->lineEdit->text();
       int yearInt = year.toInt();
        if(yearInt>1900 && yearInt <=2080)
        {
            ui -> ShowYear -> setText(year);
        }
        else{
            QMessageBox::information(this,"Wrong","Please enter correct year !");
        }

}




void Calender::on_pushButton_clicked()
{
    this->hide();
}

