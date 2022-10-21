#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <mainwindow.h>
#include "QDate"

class MainWindow;

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT


public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    MainWindow *w;

private:
    Ui::Dialog *ui;
    void reservieren();
    void getdate();
    void zurueck();
    void zurueck1();
    void getmaxdate();
    QDate date = QDate::currentDate();
};

#endif // DIALOG_H
