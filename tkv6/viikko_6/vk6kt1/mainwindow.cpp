#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_Button_count_clicked()
{
    clikkedcount++;
    QString count = QString::number(clikkedcount);
    ui->lineEdit->setText(count);

}



void MainWindow::on_Button_reset_clicked()
{
    clikkedcount=0;
    QString count = QString::number(clikkedcount);
    ui->lineEdit->setText(count);

}



