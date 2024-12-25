#include "vecteur.h"
#include <iostream>
using namespace std;
vecteur::vecteur():x(0),y(0)
{
    //ctor
}
vecteur::vecteur(float x,float y):x(x),y(y)
{
    //ctor
}
void vecteur::affiche(){
cout<<"("<<x<<","<<y<<")"<<endl;
}
void vecteur::deplacer(double dx,double dy){
    x+=dx;
    y+=dy;
}
vecteur::~vecteur()
{
    //dtor
}
