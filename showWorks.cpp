#include <QCalendarWidget>
#include <QDate>
#include <QApplication>
#include <QMessageBox>
#include "QDate"
#include "QDialog"
#include <QDebug>
#include "showWorks.h"
showWorks::showWorks(QWidget *parent)
    : QDialog(parent)
  , ui(new Ui::showWorks){
    ui->setupUi(this);
}


void showWorks::on_back_clicked()
{
    this->hide();
}


// change ui of calendar for every task that user submit
void showWorks::changeUi(int day , int month,int year,QString title)
{
    int monthh= QDate::currentDate().month();
    int yearr= QDate::currentDate().year();
    ui->year->setText(QString::number(yearr));
    ui->month->setText(QString::number(monthh));

    //compare date
    if(year==yearr)
    {
        if(monthh==month)
        {

            switch (day) {

                    case 1:
                         ui->label->setText(title);
                        ui->pushButton->setStyleSheet("background-color:green;");
                        break;
                    case 2:
                        ui->label_2->setText(title);
                        ui->pushButton_2->setStyleSheet("background-color:green;");
                        break;
                    case 3:
                        ui->label_3->setText(title);
                        ui->pushButton_3->setStyleSheet("background-color:green;");
                        break;
                    case 4:
                        ui->label_4->setText(title);
                        ui->pushButton_4->setStyleSheet("background-color:green;");
                        break;
                    case 5:
                        ui->label_5->setText(title);
                        ui->pushButton_5->setStyleSheet("background-color:green;");
                        break;
                    case 6:
                        ui->label_6->setText(title);
                        ui->pushButton_6->setStyleSheet("background-color:green;");
                        break;
                    case 7:
                        ui->label_7->setText(title);
                        ui->pushButton_7->setStyleSheet("background-color:green;");
                        break;
                    case 8:
                        ui->label_8->setText(title);
                        ui->pushButton_8->setStyleSheet("background-color:green;");
                        break;
                    case 9:
                        ui->label_9->setText(title);
                        ui->pushButton_9->setStyleSheet("background-color:green;");
                        break;
                    case 10:
                        ui->label_10->setText(title);
                        ui->pushButton_10->setStyleSheet("background-color:green;");
                        break;
                    case 11:
                        ui->label_11->setText(title);
                        ui->pushButton_11->setStyleSheet("background-color:green;");
                        break;
                    case 12:
                        ui->label_12->setText(title);
                        ui->pushButton_12->setStyleSheet("background-color:green;");
                        break;
                    case 13:
                        ui->label_13->setText(title);
                        ui->pushButton_13->setStyleSheet("background-color:green;");
                        break;
                    case 14:
                        ui->label_14->setText(title);
                        ui->pushButton_14->setStyleSheet("background-color:green;");
                        break;
                    case 15:
                        ui->label_15->setText(title);
                        ui->pushButton_15->setStyleSheet("background-color:green;");
                        break;
                    case 16:
                        ui->label_16->setText(title);
                        ui->pushButton_16->setStyleSheet("background-color:green;");
                        break;
                    case 17:
                        ui->label_17->setText(title);
                        ui->pushButton_17->setStyleSheet("background-color:green;");
                        break;
                    case 18:
                        ui->label_18->setText(title);
                        ui->pushButton_18->setStyleSheet("background-color:green;");
                        break;
                    case 19:
                        ui->label_19->setText(title);
                        ui->pushButton_19->setStyleSheet("background-color:green;");
                        break;
                    case 20:
                        ui->label_20->setText(title);
                        ui->pushButton_20->setStyleSheet("background-color:green;");
                        break;
                    case 21:
                        ui->label_21->setText(title);
                        ui->pushButton_21->setStyleSheet("background-color:green;");
                        break;
                    case 22:
                        ui->label_22->setText(title);
                        ui->pushButton_22->setStyleSheet("background-color:green;");
                        break;
                    case 23:
                        ui->label_23->setText(title);
                        ui->pushButton_23->setStyleSheet("background-color:green;");
                        break;
                    case 24:
                        ui->label_24->setText(title);
                        ui->pushButton_24->setStyleSheet("background-color:green;");
                        break;
                    case 25:
                        ui->label_25->setText(title);
                        ui->pushButton_25->setStyleSheet("background-color:green;");
                        break;
                    case 26:
                        ui->label_26->setText(title);
                        ui->pushButton_26->setStyleSheet("background-color:green;");
                        break;
                    case 27:
                        ui->label_27->setText(title);
                        ui->pushButton_27->setStyleSheet("background-color:green;");
                        break;
                    case 28:
                        ui->label_28->setText(title);
                        ui->pushButton_28->setStyleSheet("background-color:green;");
                        break;
                    case 29:
                        ui->label_29->setText(title);
                        ui->pushButton_29->setStyleSheet("background-color:green;");
                        break;
                    case 30:
                        ui->label_30->setText(title);
                        ui->pushButton_30->setStyleSheet("background-color:green;");
                        break;
                    case 31:
                        ui->label_31->setText(title);
                        ui->pushButton_31->setStyleSheet("background-color:green;");
                        break;

                     default:
                     QMessageBox::information(this,"Warning","U dont Set currect day");

            }

            //end swtich
        }

    }

}
