#include "sculptor.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>

using namespace std;

Sculptor::Sculptor(int nx, int ny, int nz){
    this->nx = nx;
    this->ny = ny;
    this->nz = nz;

    v = new Voxel**[nx];
    for(int i=0; i<nx; i++){
        v[i] = new Voxel*[ny];
        for(int j=0; j<ny; j++){
            v[i][j] = new Voxel[nz];
        }
    }
}

Sculptor::~Sculptor(){
    for(int i=0; i<nx; i++){
        for(int j=0; j<ny; j++){
            delete[] v[i][j];
        }
    }
    for(int i=0; i<nx; i++){
        delete[] v[i];
    }
    delete[] v;
}

void Sculptor::setColor(float r, float g, float b, float alpha){
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = alpha;
}

void Sculptor::putVoxel(int x, int y, int z){
    v[x][y][z].isOn = true;
    v[x][y][z].r = r;
    v[x][y][z].g = g;
    v[x][y][z].b = b;
    v[x][y][z].a = a;
}

void Sculptor::cutVoxel(int x, int y, int z){
    v[x][y][z].isOn = false;
}

void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1){
    for(int i = x0;i< x1;i++){
        for(int j = y0;j< y1;j++){
            for(int k = z0;k< z1;k++){
                putVoxel(i,j,k);
            }
         }
     }
}

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1){
    for(int i = x0;i< x1;i++){
        for(int j = y0;j< y1;j++){
            for(int k = z0;k< z1;k++){
                cutVoxel(i,j,k);
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
                    putVoxel(i,j,k);
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
                    cutVoxel(i,j,k);
                }
            }
        }
    }
}

void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){
    int xTemp, yTemp, zTemp;
    xTemp = xcenter - rx;
    yTemp = ycenter - ry;
    zTemp = zcenter - rz;

    for(int i=xTemp; i<rx; i++){
        for(int j=yTemp; j<ry; j++){
            for(int k=zTemp; k<rz; k++){
                if(i-xcenter<=rx){
                    if(j-ycenter<=ry){
                        if(k-zcenter<=rz){
                            putVoxel(i,j,k);
                        }
                    }
                }
            }
        }
    }
}

void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){
    int xTemp, yTemp, zTemp;
    xTemp = xcenter - rx;
    yTemp = ycenter - ry;
    zTemp = zcenter - rz;

    for(int i=xTemp; i<rx; i++){
        for(int j=yTemp; j<ry; j++){
            for(int k=zTemp; k<rz; k++){
                if(i-xcenter<=rx){
                    if(j-ycenter<=ry){
                        if(k-zcenter<=rz){
                            cutVoxel(i,j,k);
                        }
                    }
                }
            }
        }
    }
}

void Sculptor::writeOFF(char *filename){

    char arq[nx][ny][nz];

    for(int i = 0; i < nx; i++){
            for(int j = 0; j < ny; j++){
                for(int k = 0; k < nz; k++){
                    arq[i][j][k] = 0;
                }
            }
        }

     ofstream outfile(filename);

     outfile<<"OFF"<<endl;

     int nv = 0;

     bool checx,checy,checz;
     // checa as posiçoes laterais
     for(int i = 1; i < nx-1; i++){
             for(int j = 1; j < ny-1; j++){
                 for(int k = 1; k < nz-1; k++){
                     checx = false;checy = false;checz=false;
                     //if the point is valid, check if it is surrounded
                     if(v[i-1][j][k].isOn && v[i+1][j][k].isOn){
                         checx = true;
                     }
                     if(v[i][j-1][k].isOn && v[i][j+1][k].isOn){
                         checy = true;
                     }
                     if(v[i][j][k-1].isOn && v[i][j][k+1].isOn){
                        checz = true;
                     }
                     if(checx && checy && checz){
                         arq[i][j][k] = 1;
                     }

                 }
             }
         }
     for(int i = 0; i < nx; i++){
         for(int j = 0; j < ny; j++){
             for(int k = 0; k < nz; k++){
                 if (v[i][j][k].isOn && arq[i][j][k] == 0){
                     nv++;
                 }
             }
         }
     }

 outfile << 8*nv << " " << 6*nv << " " << 0 << endl;

 for(int k=0;k<nz; k++){
         for(int j=0;j<ny;j++){
             for (int i=0;i<nx;i++) {
                 if(v[i][j][k].isOn && arq[i][j][k] == 0){
                         outfile<<-0.5+i<<" "<<0.5+j<<" "<<-0.5+k<<endl;
                         outfile<<-0.5+i<<" "<<-0.5+j<<" "<<-0.5+k<<endl;
                         outfile<<0.5+i<<" "<<-0.5+j<<" "<<-0.5+k<<endl;
                         outfile<<0.5+i<<" "<<0.5+j<<" "<<-0.5+k<<endl;
                         outfile<<-0.5+i<<" "<<0.5+j<<" "<<0.5+k<<endl;
                         outfile<<-0.5+i<<" "<<-0.5+j<<" "<<0.5+k<<endl;
                         outfile<<0.5+i<<" "<<-0.5+j<<" "<<0.5+k<<endl;
                         outfile<<0.5+i<<" "<<0.5+j<<" "<<0.5+k<<endl;
                 }
             }
         }

     }


 int nf =0;
      for(int k=0;k<nz; k++){
           for(int j=0;j<ny;j++){
               for (int i=0;i<nx;i++) {
                   if(v[i][j][k].isOn && arq[i][j][k] == 0){
                       outfile<<"4 "<<0+nf*8<<" "<<3+nf*8<<" "<<2+nf*8<<" "<<1+nf*8<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl
                           <<"4 "<<4+nf*8<<" "<<5+nf*8<<" "<<6+nf*8<<" "<<7+nf*8<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl
                           <<"4 "<<0+nf*8<<" "<<1+nf*8<<" "<<5+nf*8<<" "<<4+nf*8<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl
                           <<"4 "<<0+nf*8<<" "<<4+nf*8<<" "<<7+nf*8<<" "<<3+nf*8<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl
                           <<"4 "<<3+nf*8<<" "<<7+nf*8<<" "<<6+nf*8<<" "<<2+nf*8<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl
                           <<"4 "<<1+nf*8<<" "<<2+nf*8<<" "<<6+nf*8<<" "<<5+nf*8<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl;
                       nf++;
                   }


               }
           }

       }
       outfile.close();

}
