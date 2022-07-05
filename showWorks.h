#ifndef SHOWWORKS_H
#define SHOWWORKS_H
#include "ui_showWorks.h"
#include "QDate"
#include "QWidget"
#include "QDialog"
QT_BEGIN_NAMESPACE
namespace Ui { class showWorks; }
QT_END_NAMESPACE
class showWorks : public QDialog
{
 Q_OBJECT;

public:
 explicit showWorks(QWidget *parent = 0);
void changeUi(int day , int month,int year,QString title);


private:

    Ui::showWorks *ui;

private slots:

    void on_back_clicked();
};
#endif // SHOWWORKS_H
