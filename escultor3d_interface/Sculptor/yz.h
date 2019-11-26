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
signals:

public slots:
};

#endif // YZ_H
