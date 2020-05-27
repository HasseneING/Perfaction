#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_dialog.h"
#include <dialog.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    setFixedSize(890,560);
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_41_clicked()
{
    Dialog d;
    hide();
    d.exec();
}
