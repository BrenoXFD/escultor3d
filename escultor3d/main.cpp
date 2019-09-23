#include <iostream>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include "sculptor.h"
#include <cstring>
using namespace std;

int main(){
 Sculptor g(20,20,20);
 char *c = "texto.txt";

 g.setColor(1,0.2,0.4,1);
 g.putSphere(20/2,20/2,20/2,10);
 g.putBox(0,1,0,1,0,1);
 g.putEllipsoid(20/2,20/2,20/2,10,13,15);
 g.cutSphere(20/2,20/2,20/2,10);
 g.cutBox(0,1,0,1,0,1);
 g.cutEllipsoid(20/2,20/2,20/2,10,13,15);

 g.writeOFF(c);
 return 0;
}
