#include "vecteur3D.h"
#include "vecteur.h"
#include <iostream>
using namespace std;
vecteur3D::vecteur3D()
{
    //ctor
}
vecteur3D::vecteur3D(float x,float y,float z):vecteur(x,y),z(z)
{
    //ctor
}

void vecteur3D::affiche(){

cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}
void vecteur3D::deplacer(double dx,double dy,double dz){
    x+=dx;
    y+=dy;
    z+=dz;
}
vecteur3D::~vecteur3D()
{
    //dtor
}
