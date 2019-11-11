#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(ui->horizontalSliderBlue, &QSlider::valueChanged, ui->lcdNumber_2, &QLCDNumber::display);
}

MainWindow::~MainWindow()
{
    delete ui;
}
