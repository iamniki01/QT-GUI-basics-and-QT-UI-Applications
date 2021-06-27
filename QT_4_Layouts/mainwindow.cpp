/***************************************************************
 * Description: This is to understand the "Basics QT in C++ " in c++.
 *  This is to understand the use of "Layout understand in UI" without using tools.
 *  Using all horizontal, vertical,grid and form layouts to make good UI.
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

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


void MainWindow::on_pushButton_clicked()
{
    QApplication::quit();
}

