#include <iostream>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include "sculptor.h"
#include <cstring>
using namespace std;

int main(){
 Sculptor g(20,20,20);


 g.setColor(1,0.2,0.4,1);
 g.putSphere(20/2,20/2,20/2,10);
 g.putBox(0,1,0,1,0,1);
 g.putEllipsoid(5,5,5,1,1,1);
 g.cutSphere(20/2,20/2,20/2,10);
 g.cutBox(0,1,0,1,0,1);
 g.cutEllipsoid(5,5,5,1,1,1);

 g.writeOFF("C:/alo/test.txt");
 return 0;
}
