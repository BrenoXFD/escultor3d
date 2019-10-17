#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figurageometrica.h"
#include "sculptor.h"

/*!
 * \brief A classe CutSphere tem como objetivo apagar os voxels de uma esfera.
 */
class CutSphere:public FiguraGeometrica
{
protected:
    int xc,yc,zc,r;
public:
    /*!
     * \brief A função CutSphere recebe as posições do centro e raio da esfera para apagar seus voxels.
     * \param x é o centro da esfera no eixo x.
     * \param y é o centro da esfera no eixo y.
     * \param z é o centro da esfera no eixo z.
     * \param radius é o raio da esfera.
     */
    CutSphere(int x,int y,int z,int radius);
    void draw(Sculptor &t);
};

#endif // CUTSPHERE_H
