/***************************************************************
 * Description: This is to understand the "Basics QT in C++ " in c++.
 *  This is to undeerstand the use o signal and slots withou using tools.
 *  Using signal and slots methods to connect prgressbar and horizontal slide
 *  As horizontal side bar moves progress bar shows the value.
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <chrono>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
            ui->progressBar, SLOT(setValue(int)));
    disconnect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
            ui->progressBar, SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

