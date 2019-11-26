#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMainWindow::showMaximized();

    s = new Sculptor(32,32,32);
    eixoX = 0; eixoY = 0; eixoZ = 0;

    boxSizeX = 1; boxSizeY = 1; boxSizeZ = 1;
    raioX = 0; raioY = 0; raioZ = 0;
    raioEsfera = 0;

    connect(ui->actionGitHub, &QAction::triggered, this, &MainWindow::gitHub);
    connect(ui->actionNew_Canvas, &QAction::triggered, this, &MainWindow::newCanvas);

    connect(ui->horizontalSliderRed, &QAbstractSlider::valueChanged, ui->widget, &Paleta::setPaletaRed);
    connect(ui->horizontalSliderBlue, &QAbstractSlider::valueChanged, ui->widget, &Paleta::setPaletaBlue);
    connect(ui->horizontalSliderGreen, &QAbstractSlider::valueChanged, ui->widget, &Paleta::setPaletaGreen);
    connect(ui->horizontalSliderAlpha, &QAbstractSlider::valueChanged, ui->widget, &Paleta::setPaletaAlpha);

    connect(ui->horizontalSliderRed, &QAbstractSlider::valueChanged, this, &MainWindow::mudarCor);
    connect(ui->horizontalSliderGreen, &QAbstractSlider::valueChanged, this, &MainWindow::mudarCor);
    connect(ui->horizontalSliderBlue, &QAbstractSlider::valueChanged, this, &MainWindow::mudarCor);
    connect(ui->horizontalSliderAlpha, &QAbstractSlider::valueChanged, this, &MainWindow::mudarCor);

    connect(ui->actionContext_Help, &QAction::triggered, this, &MainWindow::documentacao);

    connect(ui->horizontalSliderBoxSizeX, &QAbstractSlider::valueChanged, this, &MainWindow::setSizeBox);
    connect(ui->horizontalSliderBoxSizeY, &QAbstractSlider::valueChanged, this, &MainWindow::setSizeBox);
    connect(ui->horizontalSliderBoxSizeZ, &QAbstractSlider::valueChanged, this, &MainWindow::setSizeBox);

    connect(ui->verticalSliderEsferaRaio, &QAbstractSlider::valueChanged, this, &MainWindow::setRaioEsfera);
    connect(ui->verticalSliderElipseX, &QAbstractSlider::valueChanged, this, &MainWindow::setRaio);
    connect(ui->verticalSliderElipseY, &QAbstractSlider::valueChanged, this, &MainWindow::setRaio);
    connect(ui->verticalSliderElipseZ, &QAbstractSlider::valueChanged, this, &MainWindow::setRaio);

    connect(ui->horizontalSliderEixoX, &QAbstractSlider::valueChanged, this, &MainWindow::setEixo);
    connect(ui->horizontalSliderEixoY, &QAbstractSlider::valueChanged, this, &MainWindow::setEixo);
    connect(ui->horizontalSliderEixoZ, &QAbstractSlider::valueChanged, this, &MainWindow::setEixo);
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

void MainWindow::mudarCor(){
    int r, g, b, a;

    r = ui->horizontalSliderRed->value();
    g = ui->horizontalSliderGreen->value();
    b = ui->horizontalSliderBlue->value();
    a = ui->horizontalSliderAlpha->value();

    s->setColor(r,g,b,a);
}

void MainWindow::newCanvas(){
    s->~Sculptor();
    s = new Sculptor(32,32,32);
    ui->widget_2->repaint();
    ui->widget_3->repaint();
    ui->widget_4->repaint();
}

void MainWindow::setSizeBox(){
    boxSizeX = ui->horizontalSliderBoxSizeX->value();
    boxSizeY = ui->horizontalSliderBoxSizeY->value();
    boxSizeZ = ui->horizontalSliderBoxSizeZ->value();
}

void MainWindow::setRaioEsfera(){
    raioEsfera = ui->verticalSliderEsferaRaio->value();
}

void MainWindow::setRaio(){
    raioX = ui->verticalSliderElipseX->value();
    raioY = ui->verticalSliderElipseY->value();
    raioZ = ui->verticalSliderElipseZ->value();
}

void MainWindow::setEixo(){
    eixoX = ui->horizontalSliderEixoX->value();
    eixoY = ui->horizontalSliderEixoY->value();
    eixoZ = ui->horizontalSliderEixoZ->value();
}
