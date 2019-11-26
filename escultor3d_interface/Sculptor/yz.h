#ifndef YZ_H
#define YZ_H

#include <QWidget>
#include "sculptor.h"
#include "mainwindow.h"

class Yz : public QWidget
{
    Q_OBJECT
private:
    int valX;
public:
    explicit Yz(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
signals:
    void mudouX(int);
    void mudouY(int);
public slots:
};

#endif // YZ_H
