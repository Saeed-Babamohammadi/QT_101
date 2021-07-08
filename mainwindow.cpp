#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

