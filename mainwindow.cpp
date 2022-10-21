#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "QDate"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    connect(ui->pushButton,&QPushButton::released, this, &MainWindow::play);
    connect(ui->OG1, &QPushButton::released, this, &MainWindow::OG1);
    connect(ui->OG2, &QPushButton::released, this, &MainWindow::OG2);
    connect(ui->OG3, &QPushButton::released, this, &MainWindow::OG3);
    connect(ui->OG4, &QPushButton::released, this, &MainWindow::OG4);
    connect(ui->L110d, &QPushButton::released, this, &MainWindow::dialog);

}

//Stockauswahl
void MainWindow::play() {

 MainWindow w;
 hdz = ui->hdzinput->text();
 pw = ui->pwinput->text();
 ui-> stackedWidget-> setCurrentWidget(ui -> Stockauswahl);

}


void MainWindow::OG1(){
    ui-> stackedWidget-> setCurrentWidget(ui -> OG_1);

}
void MainWindow::OG2(){
    ui-> stackedWidget-> setCurrentWidget(ui -> OG_2);

}
void MainWindow::OG3(){
    ui-> stackedWidget-> setCurrentWidget(ui -> OG_3);

}
void MainWindow::OG4(){
    ui-> stackedWidget-> setCurrentWidget(ui -> OG_4);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dialog(){

    d = new Dialog();
    d->show();
}


