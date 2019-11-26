#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QUrl>
#include <QDesktopServices>
#include "sculptor.h"

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
private:
    Ui::MainWindow *ui;
    Sculptor *s;
};

#endif // MAINWINDOW_H
