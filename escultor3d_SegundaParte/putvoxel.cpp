#include "putvoxel.h"

PutVoxel::PutVoxel(int x ,int y,int z,int r,int g,int b ,int a)
{
this->x = x;
this->y = y;
this->z = z;
// cordenadas do voxel a ser ativardo.
this->r = r;
this->g = g;
this->b = b;
this->a = a;
//cores do voxel e o alpha
}

void PutVoxel::draw(Sculptor &t)
{
    t.setColor(r,g,b,a);
    t.putVoxel(x,y,z);
}
