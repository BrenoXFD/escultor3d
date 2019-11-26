#ifndef XY_H
#define XY_H

#include <QWidget>
#include "sculptor.h"
#include "mainwindow.h"

class Xy : public QWidget
{
    Q_OBJECT
private:
    int valZ;
public:
    explicit Xy(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
signals:
    void mudouX(int);
    void mudouY(int);
public slots:
};

#endif // XY_H
