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
    ui = nullptr;
}

void MainWindow::on_btnCount_clicked()
{
    qDebug()<<"Count-button pressed";
    i++;
    QString s = QString::number(i);
    ui->lineValue->setText(s);
}


void MainWindow::on_btnReset_clicked()
{
    qDebug()<<"Reset-button pressed";
    i = 0;
    ui->lineValue->setText("");
}

