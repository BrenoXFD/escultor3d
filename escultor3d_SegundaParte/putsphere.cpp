#include "putsphere.h"

PutSphere::PutSphere(int x,int y,int z ,int raio ,float r,float g ,float b ,float a)
{
xc = x;
yc = y;
zc = z;
this->raio = raio;
// variaveis esfera
this->r = r;
this->g = g;
this->b  =b;
this->a = a;
//variaveis cor/transparencia

}

void PutSphere::draw(Sculptor &t){
    t.setColor(r,g,b,a);
    t.putSphere(xc,yc,zc,raio);
}
