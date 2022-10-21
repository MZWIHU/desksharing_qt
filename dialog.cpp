
#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);


        connect(ui->desk4, &QPushButton::released, this, &Dialog::reservieren);

        connect(ui->back1, &QPushButton::released, this, &Dialog::zurueck);

        connect(ui->back2, &QPushButton::released, this, &Dialog::zurueck1);

        connect(ui->stackedWidget, &QStackedWidget::currentChanged, this, &Dialog::getdate);

        connect(ui->dateEdit, &QDateEdit::dateChanged, this, &Dialog::getmaxdate);
}

Dialog::~Dialog()
{
    delete ui;
}

 void Dialog::reservieren() {
     ui-> stackedWidget-> setCurrentWidget(ui -> page_2);
}

 void Dialog::getdate()
 {
     ui->dateEdit->setDate(date); // sets the current date to date edit.
     ui->dateEdit->setMinimumDate(date);



 }

 void Dialog::getmaxdate()
 {
     QDate startDate;
     startDate = ui->dateEdit->date();
     ui->dateEdit_2->setMinimumDate(startDate);
     ui->dateEdit_2->setMaximumDate(startDate.addDays(5));

 }

 void Dialog::zurueck() {
     this->close();
 }

 void Dialog::zurueck1() {
      ui-> stackedWidget-> setCurrentWidget(ui -> page);
 }
