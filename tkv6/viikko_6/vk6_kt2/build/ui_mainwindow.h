/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *numbe1;
    QLabel *Numbe2;
    QLabel *Ressu;
    QLineEdit *Number1;
    QLineEdit *Number2;
    QLineEdit *Result;
    QPushButton *n0;
    QPushButton *n2;
    QPushButton *n3;
    QPushButton *n4;
    QPushButton *n5;
    QPushButton *n6;
    QPushButton *n7;
    QPushButton *n8;
    QPushButton *n9;
    QPushButton *n1;
    QPushButton *sub;
    QPushButton *add;
    QPushButton *div;
    QPushButton *mul;
    QPushButton *enter;
    QPushButton *clear;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        numbe1 = new QLabel(centralwidget);
        numbe1->setObjectName("numbe1");
        numbe1->setGeometry(QRect(60, 30, 91, 16));
        Numbe2 = new QLabel(centralwidget);
        Numbe2->setObjectName("Numbe2");
        Numbe2->setGeometry(QRect(60, 70, 101, 16));
        Ressu = new QLabel(centralwidget);
        Ressu->setObjectName("Ressu");
        Ressu->setGeometry(QRect(60, 110, 111, 16));
        Number1 = new QLineEdit(centralwidget);
        Number1->setObjectName("Number1");
        Number1->setGeometry(QRect(60, 50, 113, 20));
        Number2 = new QLineEdit(centralwidget);
        Number2->setObjectName("Number2");
        Number2->setGeometry(QRect(60, 90, 113, 20));
        Result = new QLineEdit(centralwidget);
        Result->setObjectName("Result");
        Result->setGeometry(QRect(60, 130, 113, 20));
        n0 = new QPushButton(centralwidget);
        n0->setObjectName("n0");
        n0->setGeometry(QRect(230, 50, 80, 18));
        n2 = new QPushButton(centralwidget);
        n2->setObjectName("n2");
        n2->setGeometry(QRect(430, 50, 80, 18));
        n3 = new QPushButton(centralwidget);
        n3->setObjectName("n3");
        n3->setGeometry(QRect(230, 80, 80, 18));
        n4 = new QPushButton(centralwidget);
        n4->setObjectName("n4");
        n4->setGeometry(QRect(330, 80, 80, 18));
        n5 = new QPushButton(centralwidget);
        n5->setObjectName("n5");
        n5->setGeometry(QRect(430, 80, 80, 18));
        n6 = new QPushButton(centralwidget);
        n6->setObjectName("n6");
        n6->setGeometry(QRect(230, 110, 80, 18));
        n7 = new QPushButton(centralwidget);
        n7->setObjectName("n7");
        n7->setGeometry(QRect(330, 110, 80, 18));
        n8 = new QPushButton(centralwidget);
        n8->setObjectName("n8");
        n8->setGeometry(QRect(430, 110, 80, 18));
        n9 = new QPushButton(centralwidget);
        n9->setObjectName("n9");
        n9->setGeometry(QRect(330, 140, 80, 18));
        n1 = new QPushButton(centralwidget);
        n1->setObjectName("n1");
        n1->setGeometry(QRect(330, 50, 80, 18));
        sub = new QPushButton(centralwidget);
        sub->setObjectName("sub");
        sub->setGeometry(QRect(230, 140, 80, 18));
        add = new QPushButton(centralwidget);
        add->setObjectName("add");
        add->setGeometry(QRect(430, 140, 80, 18));
        div = new QPushButton(centralwidget);
        div->setObjectName("div");
        div->setGeometry(QRect(230, 170, 80, 18));
        mul = new QPushButton(centralwidget);
        mul->setObjectName("mul");
        mul->setGeometry(QRect(330, 170, 80, 18));
        enter = new QPushButton(centralwidget);
        enter->setObjectName("enter");
        enter->setGeometry(QRect(430, 170, 80, 18));
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(330, 200, 80, 18));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        numbe1->setText(QCoreApplication::translate("MainWindow", "Number1", nullptr));
        Numbe2->setText(QCoreApplication::translate("MainWindow", "Number2", nullptr));
        Ressu->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        Number1->setText(QString());
        Number2->setText(QString());
        Result->setText(QString());
        n0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        n2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        n3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        n4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        n5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        n6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        n7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        n8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        n9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        n1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        enter->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
