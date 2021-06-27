/***************************************************************
 * Description: This is to understand the "Basics QT in C++ " in c++.
 *  This is to undeerstand the use of "QMessage Box" without using tools.
 *  Using QMessage Box and its methods to display message
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

#include "ui_mainwindow.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QDebug>

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
    /*Please comment everything and check each message box*/
    QMessageBox::about(this, "Nikhil Gowda","I love C++ and coding");
    QMessageBox::aboutQt(this, "Nikhil Gowda"); //GIVES ONLY TIRLE AND ONLY QT information
    QMessageBox::critical(this, "Nikhil Gowda", "This is message from Critical method");
    QMessageBox::information(this, "Nikhil Gowda", "This is to provide information");
    QMessageBox::StandardButton reply =  QMessageBox::question(this,
                                                               "Nikhil Gowda", "Did you undesrtand QMessage Box methods?",
                                                               QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        QMessageBox::about(this, "Dear User","You Learn QMessageBox usage succesfully");

    }
    else
    {
        QMessageBox::about(this, "Dear User","No is clicked! Please follow the code and try to understand");
    }

    QMessageBox::warning(this,"Nikhil Gowda", "This is to display the warning");

}

