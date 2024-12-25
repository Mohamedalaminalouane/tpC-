#include "Cercle.h"
#include <iostream>
#include <cmath>
using namespace std;
Cercle::Cercle(){}
Cercle::~Cercle(){}
Cercle::Cercle(double r,point p):r(r),p(p){}
Cercle::Cercle(double r,double x,double y):r(r),centre(point(x,y)){}
void Cercle::affiche(){
cout<<"le rayon du cercle est"<<endl;
cout<<r;
cout<<"les cordonnee du centre sont"<<endl;
cout<<centre.affiche();
}
double Cercle:: surface(){
return M_PI*rayon*rayon;}
double Cercle::perimetre(){
return 2*M_PI*rayon;
}
void Cercle::trans(double a,double y){
    centre.setX(centre.getX()+a);
    centre.setY(centre.getY()+y);
}
bool Centre::egalite(Cercle &c){
    return(rayon==c.Getrayon()&& centre.comparer(c.centre));

}

