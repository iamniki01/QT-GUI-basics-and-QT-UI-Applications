/***************************************************************
 * Description: This is to understand the "Basics QT in C++ " in c++.
 *  This is to undeerstand the use of Spliters.
 *  Using Splitters and spcaers, which makes better vision in UI.
 *  It is created to understand Spacers, splitters,buddy and tabs in UI.
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

