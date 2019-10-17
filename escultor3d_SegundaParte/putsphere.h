#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "figurageometrica.h"
#include "sculptor.h"

class PutSphere:public FiguraGeometrica
{
protected:
    int xc,yc,zc,raio;
    float r,g,b,a;
public:
    /*!
     * \brief A função PutSphere recebe o centro da esfera e seu raio para setar os voxels da mesma.
     * \param x recebe a posição central do eixo x.
     * \param y recebe a posição central do eixo y.
     * \param z recebe a posição central do eixo z.
     * \param raiom recebe o raio da esfera.
     * \param r recebe a tonalidade de vermelho do voxel.
     * \param g recebe a tonalidade de verde do voxel.
     * \param b recebe a tonalidade de azul do voxel.
     * \param a recebe a opacidade do voxel.
     */
    PutSphere(int x,int y,int z ,int raiom,float r,float g ,float b ,float a);
    void draw(Sculptor &t);
};

#endif // PUTSPHERE_H
