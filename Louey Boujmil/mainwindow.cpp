#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "crud_employe.h"
#include "gestion_employe.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    gestion_employe  * ge = new gestion_employe(this);
    ge->show();

}
