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

void MainWindow::resetLineEdits()
{
    ui->Number1->setText("");
    ui->Number2->setText("");
    ui->Result->setText("");
}

void MainWindow::numberClickedHandler(int num)
{
    if (state == 1){
        QString currentText = ui->Number1->text();
        QString stringnum = QString::number(num);
        ui->Number1->setText(currentText + stringnum);
        number1 = ui->Number1->text();
    }else{
        QString currentText = ui->Number2->text();
            QString stringnum = QString::number(num);
        ui->Number2->setText(currentText + stringnum);
        number2 = ui->Number2->text();
    }



    }


void MainWindow::on_enter_clicked()
{
    float num1= number1.toFloat();
    float num2= number2.toFloat();
    switch (operand) {
    case 1:
        result = num1 + num2; // +
        break;
    case 2:
        result = num1 - num2;        // -
        break;
    case 3:
        result = num1 * num2;        // *
        break;
    case 4:
        result = num1 / num2;      //  /

        break;
    }
    QString stringResult = QString::number(result);
    ui->Result->setText(stringResult);
    state = 1;
}


void MainWindow::addSubMulDivClickHandler(short op)
{
    operand = op;
    state = 2;
}

void MainWindow::on_clear_clicked()
{
    resetLineEdits();
}



void MainWindow::on_add_clicked()
{
    addSubMulDivClickHandler(1);        //+
}


void MainWindow::on_sub_clicked()
{
     addSubMulDivClickHandler(2);       // -
}


void MainWindow::on_mul_clicked()
{
    addSubMulDivClickHandler(3); // *
}


void MainWindow::on_div_clicked()
{
    addSubMulDivClickHandler(4); // /
}



void MainWindow::on_n0_clicked()
{
    numberClickedHandler(0);
}




void MainWindow::on_n1_clicked()
{
    numberClickedHandler(1);
}



void MainWindow::on_n2_clicked()
{
    numberClickedHandler(2);
}


void MainWindow::on_n3_clicked()
{
    numberClickedHandler(3);
}


void MainWindow::on_n4_clicked()
{
    numberClickedHandler(4);
}


void MainWindow::on_n5_clicked()
{
    numberClickedHandler(5);
}


void MainWindow::on_n6_clicked()
{
    numberClickedHandler(6);
}


void MainWindow::on_n7_clicked()
{
    numberClickedHandler(7);
}


void MainWindow::on_n8_clicked()
{
    numberClickedHandler(8);
}


void MainWindow::on_n9_clicked()
{
    numberClickedHandler(9);
}



