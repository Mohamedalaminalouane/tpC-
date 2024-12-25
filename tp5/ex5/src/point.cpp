#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;
point::point()
{
    //ctor
}
point::point(double x,double y):x(x),y(y)
{
    //ctor
}
point::point(point &p):x(p.x),y(p.y)
{
    //ctor
}
double point::getX()const{return x;}
double point::getY()const{return y;}
void point:: setX(double x){this->x=x;}
void point:: setY(double y){this->y=y;}
void point :: affiche(){
cout<<"l'abscisse du point est"<<endl;
cout<<x<<endl;
cout<<"l'ordonneé du point est"<<endl;
cout<<y<<endl;
}
bool point::comparer(point &p){
    if(x==p.getX() && y==p.getY())
        return 1;
    else return 0;
}
double point::distance (point &p){
    return sqrt((p.getX()-x)*(p.getX()-x)+(p.getY()-y)*(p.getY()-y));
}
point point:: milieu(point &p){
point p1;
p1.setX((x+p.getX())/2);
p1.setY((y+p.getY())/2);
return p1;
}


point::~point()
{
    //dtor
}
