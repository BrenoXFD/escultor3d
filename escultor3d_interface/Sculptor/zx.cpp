#include "zx.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

Zx::Zx(QWidget *parent) : QWidget(parent){

}

void Zx::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    painter.setRenderHint(QPainter::Antialiasing);

    pen.setWidth(height()/32);

    int tamanho = height()/32;
    int xcenter, ycenter;
    xcenter = width()/2;
    ycenter = height()/2;

    for(int i=0; i<16; i++){
        int aux = 0;
        for(int j=0; j<8; j++){
            if(i%2==0){
                int x1, y1, x2, y2;
                x1 = (aux*tamanho) + xcenter;
                y1 = (i*tamanho) + ycenter;
                x2 = ((aux+1)*tamanho) + xcenter;
                y2 = y1;

                int x3, y3, x4, y4;
                x3 = ((aux+1)*tamanho) + xcenter;
                y3 = y1;
                x4 = ((aux+1)*tamanho) + xcenter;
                y4 = y1;

                pen.setColor(QColor(211,212,214));
                painter.setPen(pen);
                painter.drawLine(x1,y1,x2,y2);

                pen.setColor(QColor(255,255,255));
                painter.setPen(pen);
                painter.drawLine(x3,y3,x4,y4);

                aux = aux + 2;
            }else{
                int x1, y1, x2, y2;
                x1 = (aux*tamanho) + xcenter;
                y1 = (i*tamanho) + ycenter;
                x2 = ((aux+1)*tamanho) + xcenter;
                y2 = y1;

                int x3, y3, x4, y4;
                x3 = ((aux+1)*tamanho) + xcenter;
                y3 = y1;
                x4 = ((aux+1)*tamanho) + xcenter;
                y4 = y1;

                pen.setColor(QColor(255,255,255));
                painter.setPen(pen);
                painter.drawLine(x1,y1,x2,y2);

                pen.setColor(QColor(211,212,214));
                painter.setPen(pen);
                painter.drawLine(x3,y3,x4,y4);

                aux = aux + 2;
            }
        }
    }

    for(int i=0; i<16; i++){
        int aux = 0;
        for(int j=0; j<8; j++){
            if(i%2==0){
                int x1, y1, x2, y2;
                x1 = (aux*tamanho) + xcenter;
                y1 = ycenter - (tamanho*i);
                x2 = ((aux+1)*tamanho) + xcenter;
                y2 = y1;

                int x3, y3, x4, y4;
                x3 = ((aux+1)*tamanho) + xcenter;
                y3 = y1;
                x4 = ((aux+1)*tamanho) + xcenter;
                y4 = y1;

                pen.setColor(QColor(211,212,214));
                painter.setPen(pen);
                painter.drawLine(x1,y1,x2,y2);

                pen.setColor(QColor(255,255,255));
                painter.setPen(pen);
                painter.drawLine(x3,y3,x4,y4);

                aux = aux + 2;
            }else{
                int x1, y1, x2, y2;
                x1 = (aux*tamanho) + xcenter;
                y1 = ycenter - (tamanho*i);
                x2 = ((aux+1)*tamanho) + xcenter;
                y2 = y1;

                int x3, y3, x4, y4;
                x3 = ((aux+1)*tamanho) + xcenter;
                y3 = y1;
                x4 = ((aux+1)*tamanho) + xcenter;
                y4 = y1;

                pen.setColor(QColor(255,255,255));
                painter.setPen(pen);
                painter.drawLine(x1,y1,x2,y2);

                pen.setColor(QColor(211,212,214));
                painter.setPen(pen);
                painter.drawLine(x3,y3,x4,y4);

                aux = aux + 2;
            }
        }
    }


    for(int i=0; i<16; i++){
        int aux = 0;
        for(int j=0; j<8; j++){
            if(i%2==0){
                int x1, y1, x2, y2;
                x1 = xcenter - (aux*tamanho);
                y1 = ycenter - (tamanho*i);
                x2 = xcenter - ((aux+1)*tamanho);
                y2 = y1;

                int x3, y3, x4, y4;
                x3 = xcenter - ((aux+1)*tamanho);
                y3 = y1;
                x4 = xcenter - ((aux+1)*tamanho);
                y4 = y1;

                pen.setColor(QColor(211,212,214));
                painter.setPen(pen);
                painter.drawLine(x1,y1,x2,y2);

                pen.setColor(QColor(255,255,255));
                painter.setPen(pen);
                painter.drawLine(x3,y3,x4,y4);

                aux = aux + 2;
            }else{
                int x1, y1, x2, y2;
                x1 = xcenter - (aux*tamanho);
                y1 = ycenter - (tamanho*i);
                x2 = xcenter - ((aux+1)*tamanho);
                y2 = y1;

                int x3, y3, x4, y4;
                x3 = xcenter - ((aux+1)*tamanho);
                y3 = y1;
                x4 = xcenter - ((aux+1)*tamanho);
                y4 = y1;

                pen.setColor(QColor(255,255,255));
                painter.setPen(pen);
                painter.drawLine(x1,y1,x2,y2);

                pen.setColor(QColor(211,212,214));
                painter.setPen(pen);
                painter.drawLine(x3,y3,x4,y4);

                aux = aux + 2;
            }
        }
    }

    for(int i=0; i<16; i++){
        int aux = 0;
        for(int j=0; j<8; j++){
            if(i%2==0){
                int x1, y1, x2, y2;
                x1 = xcenter - (aux*tamanho);
                y1 = (i*tamanho) + ycenter;
                x2 = xcenter - ((aux+1)*tamanho);
                y2 = y1;

                int x3, y3, x4, y4;
                x3 = xcenter - ((aux+1)*tamanho);
                y3 = y1;
                x4 = xcenter - ((aux+1)*tamanho);
                y4 = y1;

                pen.setColor(QColor(211,212,214));
                painter.setPen(pen);
                painter.drawLine(x1,y1,x2,y2);

                pen.setColor(QColor(255,255,255));
                painter.setPen(pen);
                painter.drawLine(x3,y3,x4,y4);

                aux = aux + 2;
            }else{
                int x1, y1, x2, y2;
                x1 = xcenter - (aux*tamanho);
                y1 = (i*tamanho) + ycenter;
                x2 = xcenter - ((aux+1)*tamanho);
                y2 = y1;

                int x3, y3, x4, y4;
                x3 = xcenter - ((aux+1)*tamanho);
                y3 = y1;
                x4 = xcenter - ((aux+1)*tamanho);
                y4 = y1;

                pen.setColor(QColor(255,255,255));
                painter.setPen(pen);
                painter.drawLine(x1,y1,x2,y2);

                pen.setColor(QColor(211,212,214));
                painter.setPen(pen);
                painter.drawLine(x3,y3,x4,y4);

                aux = aux + 2;
            }
        }
    }



}
