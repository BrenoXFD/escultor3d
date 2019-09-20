#include "sculptor.h"
#include <cmath>

Sculptor::Sculptor(int nx, int ny, int nz){
    v = new Voxel**[nx];
    for(int i=0; i<nx; i++){
        v[i] = new Voxel*[ny];
        for(int j=0; j<ny; j++){
            v[i][j] = new Voxel[nz];
        }
    }
}

Sculptor::~Sculptor(){

}

void Sculptor::setColor(float r, float g, float b, float alpha){
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = alpha;
}

void Sculptor::putVoxel(int x, int y, int z){
    v[x][y][z].isOn = true;
}

void Sculptor::cutVoxel(int x, int y, int z){
    v[x][y][z].isOn = false;
}

void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1){
    for(int i = x0;i< x1;i++){
        for(int j = y0;j< y1;j++){
            for(int k = z0;k< z1;k++){
                v[i][j][k].isOn = true;
                v[i][j][k].r = r;
                v[i][j][k].g = g;
                v[i][j][k].b = b;
                v[i][j][k].a = a;
            }
         }
     }
}

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1){
    for(int i = x0;i< x1;i++){
        for(int j = y0;j< y1;j++){
            for(int k = z0;k< z1;k++){
                v[i][j][k].isOn = false;

            }
        }
    }
}

void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius){
    double cal;
    for(int i =0;i<nx;i++){
        for(int j=0;j <ny;j++){
            for(int k=0; k<ny; k++){
                cal = sqrt(pow(i - xcenter,2) - pow(j - ycenter,2) - pow(k - zcenter,2));
                if( cal <= radius){
                    v[i][j][k].isOn = true;
                    v[i][j][k].r = r;
                    v[i][j][k].g = g;
                    v[i][j][k].b = b;
                    v[i][j][k].a = a;
                }
            }
        }
    }
}

void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius){
    double cal;
    for(int i =0;i<nx;i++){
        for(int j=0;j <ny;j++){
            for(int k=0; k<ny; k++){
                cal = sqrt(pow(i - xcenter,2) - pow(j - ycenter,2) - pow(k - zcenter,2));
                if( cal <= radius){
                    v[i][j][k].isOn = false;
                }
            }
        }
    }
}

void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){

}

void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){

}

void Sculptor::writeOFF(char *filename){

}
