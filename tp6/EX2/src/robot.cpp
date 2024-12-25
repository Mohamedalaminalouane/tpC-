#include "robot.h"
#include <iostream>
#include<cmath>
using namespace std;
robot::robot()
{
    //ctor
}
robot::robot(string nom,double x,double y,double porte):nom(nom),x(x),y(y),porte(porte),estMort(false){
}
void robot::deplacer(double dx,double dy){
    x+=dx;
    y+=dy;
}
void robot::afficher(){
    cout<<"mon nom est"<<nom<<endl;
    cout<<"mon positionnement est ("<<x<<","<<y<<")"<<endl;
    cout<<"ma porte est "<<porte<<endl;
    cout<<"mon status"<<estMort<<endl;

}
double robot::distance(robot &r){
    return sqrt(pow(x -r.x,2)+pow(y -r.y,2));
}
robot::~robot()
{
    //dtor
}
