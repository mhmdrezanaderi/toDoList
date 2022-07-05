#include <QCalendarWidget>
#include <QDate>
#include <QApplication>
#include <QMessageBox>
#include "QDialog"
#include <QDebug>
#include "calender.h"

Calender::Calender(QWidget *parent)
    : QDialog(parent)
  , ui(new Ui::calender){
    ui->setupUi(this);
}


//get data of date and set under the set button
void Calender::on_setTime_clicked()
{
       day =  ui-> listWidget ->currentItem()->text();
       ui->ShowDay->setText(day);
       month = ui->comboBox->currentText();
       monthInt=  ui->comboBox->currentIndex();

       if(monthInt!= 0)
       {
            ui ->ShowMonth -> setText(month);
       }
       else{
           QMessageBox::information(this,"Wrong","Please choose one month !");
       }

       year = ui->lineEdit->text();
       int yearInt = year.toInt();
        if(yearInt>2015 && yearInt <=2030)
        {
            ui -> ShowYear -> setText(year);
        }
        else{
            QMessageBox::information(this,"Wrong","Please enter correct year !");
        }

}

void Calender::on_submit_clicked()
{
    QMessageBox::information(this,"date", year + " / " + month + " / " + day);
    this->hide();
}


