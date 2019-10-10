#include "Putbox.h"

PutBox::PutBox(int x0,int x1,int y0,int y1, int z0 ,int z1,int r,int g,int b,int a)
{
xi = x0;
xf = x1;
yi = y0;
yf = y1;
zi = z0;
zf = z1;
// colocando os limtes da box

this->r = r;
this->g = g;
this->b = b;
this->a = a;
// cor e transparencia

}

void PutBox::draw(Sculptor &t){
    t.setColor(r,g,b,a);
    t.putBox(xi,xf,yi,yf,zi,zf);
}
