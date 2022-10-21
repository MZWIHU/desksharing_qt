#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QPushButton"
#include "dialog.h"
class Dialog;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
       Dialog *d;



private slots:
    void play();
    void OG1();
    void OG2();
    void OG3();
    void OG4();
    void dialog();

private:
    Ui::MainWindow *ui;
    QString hdz;
    QString pw;

};
#endif // MAINWINDOW_H
