#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(ui->horizontalSliderBlue, &QSlider::valueChanged, ui->lcdNumber_2, &QLCDNumber::display);
    connect(ui->actionGitHub, &QAction::triggered, this, gitHub);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::gitHub(){
    QUrl url("http://github.com/BrenoXFD/escultor3d");
    QDesktopServices::openUrl(url);
}
