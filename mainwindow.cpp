#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->cnt1_btn, &QPushButton::clicked, this, &MainWindow::cnt1SlotFunc);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::cnt1SlotFunc()
{
    cnt1 +=1;
    qInfo() << "Button 1 Clicked" << cnt1;
    ui->cnt1_lineEdit->setText(QString::number(cnt1));
}


void MainWindow::on_cnt2_btn_clicked()
{
    cnt2 +=1;
    qInfo() << "Button 2 Clicked" << cnt2;
    ui->cnt2_lineEdit->setText(QString::number(cnt2));
}

