#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MyWindow; }  //telling mainwindow to include UI
QT_END_NAMESPACE

class MyWindow : public QMainWindow
{
    Q_OBJECT    //macro; MOC which converts all header file to equivalent cpp file.

public:
    MyWindow(QWidget *parent = nullptr);
    ~MyWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MyWindow *ui;
};
#endif // MYWINDOW_H
