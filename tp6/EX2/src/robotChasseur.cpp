#include "robotChasseur.h"
#include "robot.h"
#include <iostream>
#include <cmath>
using namespace std;
robotChasseur::robotChasseur()
{
    //ctor
}
robotChasseur::robotChasseur(string nom,double x,double y,double porte):robot(nom, x, y,porte)
{
    //ctor
}

void robotChasseur::tuer(robot &r){
   if(!r.stMort()&&distance(r)<=porte){
        r.setMort();
        cout<<"robot "<<r.nom<<"tuer par "<<nom<< endl;
    } else {
        cout <<r.nom<<" est hors de portee ou deja mort"<< endl;
    }
}
robotChasseur::~robotChasseur()
{
    //dtor
}
