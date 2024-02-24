#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    state = 1;
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
}

//**************** BUTTON-HANDLER ***************
void MainWindow::numberClickedHandler()
{
    if (state == 1) {
        QPushButton *button = qobject_cast<QPushButton*>(sender());
        number1 = button->objectName();
        button1Text += button->text();
        qDebug()<<"button"<< number1 <<"pressed";
        ui->textNum1->setText(button1Text);
    }
    else if (state == 2) {
        QPushButton *button = qobject_cast<QPushButton*>(sender());
        number2 = button->objectName();
        button2Text += button->text();
        qDebug()<<"button"<< number2 <<"pressed";
        ui->textNum2->setText(button2Text);
    }
}

//************** OPERAND-HANDLER ****************
void MainWindow::addSubMulDivClickHandler()
{
    state = 2;
    qDebug() << "state is now" << state;
}

//********** CLEAR & ENTER-HANDLER **************
void MainWindow::clearAndEnterClickHandler()
{
    state = 1;
    qDebug() << "state is now" << state;
    float n1 = button1Text.toFloat();
    float n2 = button2Text.toFloat();
    qDebug() <<"number 1 is" << n1 << "and number 2 is" << n2;
    switch(operand) {
        case 0:
            result = n1 + n2;
            break;
        case 1:
            result = n1 - n2;
            break;
        case 2:
            result = n1 * n2;
            break;
        case 3:
            result = n1 / n2;
            break;
    }
    ui->textResult->setText(QString::number(result));
}

//**************** BUTTON-SLOTS *****************
void MainWindow::on_btnNum1_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btnNum2_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btnNum3_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btnNum4_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btnNum5_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btnNum6_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btnNum7_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btnNum8_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btnNum9_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btnNum0_clicked()
{
    numberClickedHandler();
}

//************* OPERAND-SLOTS *******************
void MainWindow::on_btnAdd_clicked()
{
    operand = 0;
    qDebug() << "clicked add";
    addSubMulDivClickHandler();
}


void MainWindow::on_btnSub_clicked()
{
    operand = 1;
    qDebug() << "clicked sub";
    addSubMulDivClickHandler();
}


void MainWindow::on_btnMul_clicked()
{
    operand = 2;
    qDebug() << "clicked mul";
    addSubMulDivClickHandler();
}


void MainWindow::on_btnDiv_clicked()
{
    operand = 3;
    qDebug() << "clicked div";
    addSubMulDivClickHandler();
}

//************ CLEAR & ENTER-SLOTS *************
void MainWindow::on_btnClear_clicked()
{
    qDebug() <<"clicked clear";
    clearAndEnterClickHandler();
    resetLineEdits();
}


void MainWindow::on_btnEnter_clicked()
{
    qDebug() <<"clicked enter";
    clearAndEnterClickHandler();
}


//************ CLEAR TEXT FIELDS ***************
void MainWindow::resetLineEdits() {
    button1Text = "";
    button2Text = "";
    ui->textNum1->setText("");
    ui->textNum2->setText("");
    ui->textResult->setText("");
}
