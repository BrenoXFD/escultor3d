#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "figurageometrica.h"
#include "sculptor.h"

/*!
 * \brief A classe CutEllipsoid tem como função apagar os voxels de uma elipse.
 */
class CutEllipsoid : public FiguraGeometrica
{
protected:
    int xc,yc,zc,rx,ry,rz; // variaveis da elipse

public:
    /*!
     * \brief A função CutEllipsoid remove os voxels do elipsóide.
     * \param O parametro x é a posição do centro da elipse no eixo x.
     * \param O parametro y é a posição do centro da elipse no eixo y.
     * \param O parametro z é a posição do centro da elipse no eixo z.
     * \param raix é o raio da elipse em x.
     * \param raiy é o raio da elipse em y.
     * \param raiz é o raio da elipse em z.
     */
    CutEllipsoid(int x,int y,int z,int raix ,int raiy,int raiz);
    void draw(Sculptor &t);
    ~CutEllipsoid();
};

#endif // CUTELLIPSOID_H
