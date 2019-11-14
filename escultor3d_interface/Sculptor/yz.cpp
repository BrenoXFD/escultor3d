#include "yz.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

Yz::Yz(QWidget *parent) : QWidget(parent){

}

void Yz::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    brush.setColor(QColor(255,255,222));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(238,82,61));
    pen.setWidth(2);

    painter.setBrush(brush);
    painter.setPen(pen);

    painter.drawRect(0,0,width(),height());

    pen.setWidth(1);
    pen.setColor(QColor(48,48,48));

    for(int i=0; i<32; i++){
        painter.drawLine((i*16),0,(i*16),height());
        painter.drawLine(0,(i*16),width(),(i*16));
    }
}
