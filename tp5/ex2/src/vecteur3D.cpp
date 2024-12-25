#include "vecteur3D.h"
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
vecteur3D::vecteur3D():x(0),y(0),z(0)
{
    //ctor
}

vecteur3D::~vecteur3D()
{
    //dtor
}
float vecteur3D::getX ()const{
return x;
}
float vecteur3D::getY ()const{
return y;
}
float vecteur3D::getZ ()const{
return z;
}
void vecteur3D::setX(float x){
this->x=x;}
void vecteur3D::setY(float y){
this->y=y;}
void vecteur3D::setZ(float z){
this->z=z;}
void vecteur3D::afficher(){
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}
vecteur3D vecteur3D::somme(vecteur3D &v){
    vecteur3D vr;
    vr.setX(x+v.getX());
    vr.setY(y+v.getY());
    vr.setZ(y+v.getZ());
    return vr;
}
float vecteur3D::prodscal(vecteur3D &v){

    return (x*v.getX()+y*v.getY()+z*v.getZ());
}
bool vecteur3D::memcomp(vecteur3D &v){
    return (x==v.getX()&&y==v.getY()&&z==v.getZ());
}
float vecteur3D::norme(){
    return sqrt(x*x+y*y+z*z);
}


