#include "cutbox.h"

CutBox:: CutBox(int x0,int x1,int y0,int y1, int z0 ,int z1)
{
    xi = x0;
    xf = x1;
    yi = y0;
    yf = y1;
    zi = z0;
    zf = z1;
    // colocando os limtes da box

}

void CutBox::draw(Sculptor &t){
 t.cutBox(xi,xf,yi,yf,zi,zf);
}
CutBox:: ~CutBox(){

}
