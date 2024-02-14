#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    for (const QCameraInfo & infor : QCcameraInfo::availableCameras())
    {
        qDebug << infor.description();;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::start_camera()
{
    M_Camera -> start();
}

void MainWindow::stop_camera()
{
    M_Camera -> stop();
}

void MainWindow::on_pushButton_Start_Camera_clicked()
{
    start_camera();
}


void MainWindow::on_pushButton_Stop_Camera_clicked()
{
    stop_camera;
}

