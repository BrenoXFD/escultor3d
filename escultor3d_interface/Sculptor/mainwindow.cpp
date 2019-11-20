#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMainWindow::showMaximized();
    connect(ui->actionGitHub, &QAction::triggered, this, &MainWindow::gitHub);
    connect(ui->horizontalSliderRed, &QAbstractSlider::valueChanged, ui->widget, &Paleta::setPaletaRed);
    connect(ui->horizontalSliderBlue, &QAbstractSlider::valueChanged, ui->widget, &Paleta::setPaletaBlue);
    connect(ui->horizontalSliderGreen, &QAbstractSlider::valueChanged, ui->widget, &Paleta::setPaletaGreen);
    connect(ui->horizontalSliderAlpha, &QAbstractSlider::valueChanged, ui->widget, &Paleta::setPaletaAlpha);
    connect(ui->actionContext_Help, &QAction::triggered, this, &MainWindow::documentacao);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::gitHub(){
    QUrl url("http://github.com/BrenoXFD/escultor3d");
    QDesktopServices::openUrl(url);
}

void MainWindow::documentacao(){
    QUrl url("http://github.com/BrenoXFD/escultor3d");
    QDesktopServices::openUrl(url);
}
