#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageometrica.h"
#include "sculptor.h"

class PutVoxel: public FiguraGeometrica
{
protected:
    int x,y,z;
    int r,g,b,a;
public:
    PutVoxel(int x ,int y,int z,int r,int g,int b ,int a);
    void draw(Sculptor &t);
};

#endif // PUTVOXEL_H
