#include "yz.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QMouseEvent>

Yz::Yz(QWidget *parent) : QWidget(parent){
    valX = 0;
}

void Yz::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    painter.setRenderHint(QPainter::Antialiasing);

    pen.setWidth(height()/32);

    int tamanho = height()/32;
    int xcenter, ycenter, x, y, aux;
    xcenter = width()/2;
    ycenter = height()/2;
    aux = 0;

    for(int i=0; i<32; i++){
        for(int j=0; j<32; j++){
            if(i<16 && j<16){
                x = xcenter - (j*tamanho);
                y = ycenter - (i*tamanho);
                if(aux%2==0){
                    pen.setColor(QColor(211,212,214));
                    painter.setPen(pen);
                    painter.drawPoint(x,y);
                }else{
                    pen.setColor(QColor(255,255,255));
                    painter.setPen(pen);
                    painter.drawPoint(x,y);
                }
            }
            if(i<16 && j>=16){
                x = xcenter + ((j-15)*tamanho);
                y = ycenter - (i*tamanho);
                if(aux%2==0){
                    pen.setColor(QColor(255,255,255));
                    painter.setPen(pen);
                    painter.drawPoint(x,y);
                }else{
                    pen.setColor(QColor(211,212,214));
                    painter.setPen(pen);
                    painter.drawPoint(x,y);
                }
            }
            if(i>=16 && j<16){
                x = xcenter - (j*tamanho);
                y = ycenter + ((i-15)*tamanho);
                if(aux%2==0){
                    pen.setColor(QColor(255,255,255));
                    painter.setPen(pen);
                    painter.drawPoint(x,y);
                }else{
                    pen.setColor(QColor(211,212,214));
                    painter.setPen(pen);
                    painter.drawPoint(x,y);
                }
            }
            if(i>=16 && j>=16){
                x = xcenter + ((j-15)*tamanho);
                y = ycenter + ((i-15)*tamanho);
                if(aux%2==0){
                    pen.setColor(QColor(211,212,214));
                    painter.setPen(pen);
                    painter.drawPoint(x,y);
                }else{
                    pen.setColor(QColor(255,255,255));
                    painter.setPen(pen);
                    painter.drawPoint(x,y);
                }
            }
            aux++;
        }
        aux++;
    }
}

void Yz::mousePressEvent(QMouseEvent *event){
    emit mudouXY(event->x(),event->y());
}
