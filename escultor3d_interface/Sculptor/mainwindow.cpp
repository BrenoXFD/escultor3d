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
    caneta = 0;

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

    connect(ui->pushButtonPutVoxel, &QPushButton::clicked, this, &MainWindow::canetaPutVoxel);
    connect(ui->pushButtonCutVoxel, &QPushButton::clicked, this, &MainWindow::canetaCutVoxel);
    connect(ui->pushButtonPutBox, &QPushButton::clicked, this, &MainWindow::canetaPutBox);
    connect(ui->pushButtonCutBox, &QPushButton::clicked, this, &MainWindow::canetaCutBox);
    connect(ui->pushButtonPutSphere, &QPushButton::clicked, this, &MainWindow::canetaPutSphere);
    connect(ui->pushButtonCutSphere, &QPushButton::clicked, this, &MainWindow::canetaCutSphere);
    connect(ui->pushButtonPutEllipsoid, &QPushButton::clicked, this, &MainWindow::canetaPutEllipsoid);
    connect(ui->pushButtonCutEllipsoid, &QPushButton::clicked, this, &MainWindow::canetaCutEllipsoid);

    connect(ui->widget_2, &Yz::mudouXY, this, &MainWindow::planoYZ);
    connect(ui->widget_3, &Zx::mudouXY, this, &MainWindow::planoZX);
    connect(ui->widget_4, &Xy::mudouXY, this, &MainWindow::planoXY);
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
    QUrl url("https://github.com/BrenoXFD/escultor3d/tree/master/Documentação/html");
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

void MainWindow::canetaPutVoxel(){
    caneta = 0;
}

void MainWindow::canetaCutVoxel(){
    caneta = 1;
}

void MainWindow::canetaPutBox(){
    caneta = 2;
}

void MainWindow::canetaCutBox(){
    caneta = 3;
}

void MainWindow::canetaPutSphere(){
    caneta = 4;
}

void MainWindow::canetaCutSphere(){
    caneta = 5;
}

void MainWindow::canetaPutEllipsoid(){
    caneta = 6;
}

void MainWindow::canetaCutEllipsoid(){
    caneta = 7;
}

void MainWindow::planoYZ(int x, int y){
    desenhar(x,y,0);
}

void MainWindow::planoZX(int x, int y){
    desenhar(x,y,1);
}

void MainWindow::planoXY(int x, int y){
    desenhar(x,y,2);
}

void MainWindow::desenhar(int x, int y, int plano){
    int minX, minY, maxX, maxY, xCenter, yCenter, tamanho;
    int i=0,j=0,k=0;
    bool dentro;

    tamanho = ui->widget_2->height();
    tamanho = tamanho/32;
    xCenter = ui->widget_2->width();
    xCenter = xCenter/2;
    yCenter = ui->widget_2->height();
    yCenter = yCenter/2;

    minX = (xCenter) - (tamanho*16);
    maxX = (xCenter) + (tamanho*16);
    minY = (yCenter) - (tamanho*16);
    maxY = (yCenter) + (tamanho*16);

    //Converter x e y em posição da matriz baseado nesses centros

    if(dentro){
        switch (caneta) {
            case 0:
                if(0){
                    s->putVoxel(eixoX,j,k);
                }else if(1){
                    s->putVoxel(i,eixoY,j);
                }else{
                    s->putVoxel(i,j,eixoZ);
                }
                break;
            case 1:
                if(0){
                    s->cutVoxel(eixoX,j,k);
                }else if(1){
                    s->cutVoxel(i,eixoY,j);
                }else{
                    s->cutVoxel(i,j,eixoZ);
                }
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;

        }
    }
}
