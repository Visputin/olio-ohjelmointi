/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
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
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *textNum1;
    QLineEdit *textNum2;
    QLineEdit *textResult;
    QPushButton *btnNum1;
    QPushButton *btnNum2;
    QPushButton *btnNum3;
    QPushButton *btnAdd;
    QPushButton *btnNum4;
    QPushButton *btnNum7;
    QPushButton *btnNum0;
    QPushButton *btnNum5;
    QPushButton *btnNum8;
    QPushButton *btnClear;
    QPushButton *btnNum6;
    QPushButton *btnNum9;
    QPushButton *btnEnter;
    QPushButton *btnDiv;
    QPushButton *btnMul;
    QPushButton *btnSub;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 60, 71, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 60, 71, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(360, 60, 71, 16));
        textNum1 = new QLineEdit(centralwidget);
        textNum1->setObjectName("textNum1");
        textNum1->setGeometry(QRect(60, 80, 113, 24));
        textNum2 = new QLineEdit(centralwidget);
        textNum2->setObjectName("textNum2");
        textNum2->setGeometry(QRect(190, 80, 113, 24));
        textResult = new QLineEdit(centralwidget);
        textResult->setObjectName("textResult");
        textResult->setGeometry(QRect(360, 80, 113, 24));
        btnNum1 = new QPushButton(centralwidget);
        btnNum1->setObjectName("btnNum1");
        btnNum1->setGeometry(QRect(60, 120, 80, 24));
        btnNum2 = new QPushButton(centralwidget);
        btnNum2->setObjectName("btnNum2");
        btnNum2->setGeometry(QRect(150, 120, 80, 24));
        btnNum3 = new QPushButton(centralwidget);
        btnNum3->setObjectName("btnNum3");
        btnNum3->setGeometry(QRect(240, 120, 80, 24));
        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(360, 120, 80, 24));
        btnNum4 = new QPushButton(centralwidget);
        btnNum4->setObjectName("btnNum4");
        btnNum4->setGeometry(QRect(60, 150, 80, 24));
        btnNum7 = new QPushButton(centralwidget);
        btnNum7->setObjectName("btnNum7");
        btnNum7->setGeometry(QRect(60, 180, 80, 24));
        btnNum0 = new QPushButton(centralwidget);
        btnNum0->setObjectName("btnNum0");
        btnNum0->setGeometry(QRect(60, 210, 80, 24));
        btnNum5 = new QPushButton(centralwidget);
        btnNum5->setObjectName("btnNum5");
        btnNum5->setGeometry(QRect(150, 150, 80, 24));
        btnNum8 = new QPushButton(centralwidget);
        btnNum8->setObjectName("btnNum8");
        btnNum8->setGeometry(QRect(150, 180, 80, 24));
        btnClear = new QPushButton(centralwidget);
        btnClear->setObjectName("btnClear");
        btnClear->setGeometry(QRect(150, 210, 80, 24));
        btnNum6 = new QPushButton(centralwidget);
        btnNum6->setObjectName("btnNum6");
        btnNum6->setGeometry(QRect(240, 150, 80, 24));
        btnNum9 = new QPushButton(centralwidget);
        btnNum9->setObjectName("btnNum9");
        btnNum9->setGeometry(QRect(240, 180, 80, 24));
        btnEnter = new QPushButton(centralwidget);
        btnEnter->setObjectName("btnEnter");
        btnEnter->setGeometry(QRect(240, 210, 80, 24));
        btnDiv = new QPushButton(centralwidget);
        btnDiv->setObjectName("btnDiv");
        btnDiv->setGeometry(QRect(360, 210, 80, 24));
        btnMul = new QPushButton(centralwidget);
        btnMul->setObjectName("btnMul");
        btnMul->setGeometry(QRect(360, 180, 80, 24));
        btnSub = new QPushButton(centralwidget);
        btnSub->setObjectName("btnSub");
        btnSub->setGeometry(QRect(360, 150, 80, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
        label->setText(QCoreApplication::translate("MainWindow", "Number 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number 2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        btnNum1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btnNum2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btnNum3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnNum4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btnNum7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btnNum0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btnNum5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btnNum8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        btnNum6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btnNum9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btnEnter->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        btnDiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btnMul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btnSub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
