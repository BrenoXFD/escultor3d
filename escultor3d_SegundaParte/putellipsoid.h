#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "figurageometrica.h"
#include "sculptor.h"

/*!
 * \brief A classe PutEllipsoid tem como objetivo criar um elipsóide.
 */
class PutEllipsoid:public FiguraGeometrica
{
protected:
    int xc,yc,zc,rx,ry,rz; // variaveis da elipse
    float r,g,b,a; // cor e transparencia
public:
    /*!
     * \brief A função PutEllipsoid recebe o centro da elipse e o raio para setar o voxel.
     * \param x recebe o centro da elipse no eixo x.
     * \param y recebe o centro da elipse no eixo y.
     * \param z recebe o centro da elipse no eixo z.
     * \param raix recebe o raio em x.
     * \param raiy recebe o raio em y.
     * \param raiz recebe o raio em z.
     * \param r recebe a tonalidade de vermelho do voxel.
     * \param g recebe a tonalidade de verde do voxel.
     * \param b recebe a tonalidade de azul do voxel.
     * \param a recebe a opacidade do voxel.
     */
    PutEllipsoid(int x,int y,int z,int raix ,int raiy,int raiz,float r,float g,float b,float a);
    void draw(Sculptor &t);
};

#endif // PUTELLIPSOID_H
