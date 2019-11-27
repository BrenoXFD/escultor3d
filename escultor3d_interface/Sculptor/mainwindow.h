#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QUrl>
#include <QDesktopServices>
#include "sculptor.h"
#include "yz.h"
#include "xy.h"
#include "zx.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void gitHub();
    void documentacao();
    void mudarCor();
    void newCanvas();
    void setSizeBox();
    void setRaioEsfera();
    void setRaio();
    void setEixo();
    void canetaPutVoxel();
    void canetaCutVoxel();
    void canetaPutBox();
    void canetaCutBox();
    void canetaPutSphere();
    void canetaCutSphere();
    void canetaPutEllipsoid();
    void canetaCutEllipsoid();
    void planoYZ(int x, int y);
    void planoZX(int x, int y);
    void planoXY(int x, int y);
    void desenhar(int x, int y, int plano);
private:
    Ui::MainWindow *ui;
    Sculptor *s;
    int boxSizeX, boxSizeY, boxSizeZ;
    int raioEsfera;
    int raioX, raioY, raioZ;
    int eixoX, eixoY, eixoZ;
    int caneta;
};

#endif // MAINWINDOW_H
