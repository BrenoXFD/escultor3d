#include "paleta.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

Paleta::Paleta(QWidget *parent) : QWidget(parent)
{

}

void Paleta::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    brush.setColor(QColor(48,48,48));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(204,255,255));
    pen.setWidth(2);

    painter.setBrush(brush);
    painter.setPen(pen);

    painter.drawRect(0,0,width(),height());
}
