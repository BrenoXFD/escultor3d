#ifndef ZX_H
#define ZX_H

#include <QWidget>
#include "sculptor.h"
#include "mainwindow.h"

class Zx : public QWidget
{
    Q_OBJECT
private:
    int valY;
public:
    explicit Zx(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
signals:
    void mudouXY(int,int);
public slots:
};

#endif // ZX_H
