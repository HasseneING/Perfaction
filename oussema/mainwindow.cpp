#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_dialog.h"
#include <dialog.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    setFixedSize(1900,1000);
    ui->setupUi(this);
    QPixmap bkgnd("C:/Users/souso/Desktop/rentcar/assets/start.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_41_clicked()
{
    Dialog d;
    close();
    d.exec();
}
