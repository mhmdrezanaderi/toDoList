#ifndef CALENDER_H
#define CALENDER_H
#include "ui_calender.h"
#include "QDate"
#include "QWidget"
#include "QDialog"
QT_BEGIN_NAMESPACE
namespace Ui { class calender; }
QT_END_NAMESPACE
class Calender : public QDialog
{
 Q_OBJECT;

public:
 explicit Calender(QWidget *parent = 0);
    QString day;
    QString month;
    QString year;

private:

    Ui::calender *ui;

private slots:



    void on_setTime_clicked();
    void on_pushButton_clicked();
};

#endif // CALENDER_H


