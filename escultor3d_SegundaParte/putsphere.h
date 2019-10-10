#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "figurageometrica.h"
#include "sculptor.h"

class PutSphere:public FiguraGeometrica
{
protected:
    int xc,yc,zc,raio;
    int r,g,b,a;
public:
    PutSphere(int x,int y,int z ,int raiom,int r,int g ,int b ,int a);
    void draw(Sculptor &t);
};

#endif // PUTSPHERE_H
