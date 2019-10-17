#ifndef PUTBOX_H
#define PUTBOX_H
#include "figurageometrica.h"
#include "sculptor.h"

/*!
 * \brief A classe PutBox tem como objetivo crar uma caixa.
 */
class PutBox:public FiguraGeometrica
{
protected:
    int xi,xf,yi,yf,zi,zf;
    float r,g,b,a;


public:
    /*!
     * \brief A função PutBox  recebe as posições inicias e finais da caixa, assim como a sua cor para criar o voxel.
     * \param x0 posição inicial no eixo x.
     * \param x1 posição final no eixo x.
     * \param y0 posição inicial no eixo y.
     * \param y1 posição final no eixo y.
     * \param z0 posição inicial no eixo z.
     * \param z1 posição final no eixo z.
     * \param r recebe a tonalidade de vermelho do voxel.
     * \param g recebe a tonalidade de verde do voxel.
     * \param b recebe a tonalidade de azul do voxel.
     * \param a recebe a opacidade do voxel.
     */
    PutBox(int x0,int x1,int y0,int y1, int z0 ,int z1,float r,float g,float b,float a);
    void draw(Sculptor &t);
};

#endif // PUTBOX_H
