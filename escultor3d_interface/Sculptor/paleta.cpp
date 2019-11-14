#include "paleta.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

Paleta::Paleta(QWidget *parent) : QWidget(parent){
    red = 48;
    blue = 48;
    green = 48;
    alpha = 255;
}

void Paleta::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    brush.setColor(QColor(red, green, blue, alpha));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(238,82,61));
    pen.setWidth(2);

    painter.setBrush(brush);
    painter.setPen(pen);

    painter.drawRect(0,0,width(),height());
}

void Paleta::setPaletaRed(int _red){
    red = _red;
    repaint();
}

void Paleta::setPaletaBlue(int _blue){
    blue = _blue;
    repaint();
}

void Paleta::setPaletaGreen(int _green){
    green = _green;
    repaint();
}

void Paleta::setPaletaAlpha(int _alpha){
    alpha = _alpha;
    repaint();
}
