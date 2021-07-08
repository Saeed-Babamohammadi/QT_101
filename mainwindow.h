#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void cnt1SlotFunc();

    int cnt1=0;
    int cnt2=0;

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
