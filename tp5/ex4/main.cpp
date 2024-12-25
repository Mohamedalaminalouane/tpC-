#include <iostream>
#include "complexe.h"
using namespace std;

int main()
{
    complexe c1(7.8,5.6);
    c1.affiche();
    /* calcule le module du point complexe*/
    cout<<"le module du point ="<<c1.module()<<endl;
    /*le conjugee du point*/
    cout<<"le module du point =";
    c1.conjugue();
    complexe c2(1.2,5.4),c3,c4,c5,c6;
    c3=c1+c2;
    cout<<"##addition complexe_complexe:"<<endl;
    c3.affiche();
    double x=3;
    c4=c2+x;
    cout<<"##addition complexe_double:"<<endl;
    c4.affiche();
    c5=c1*c2;
    cout<<"##multiplication complexe_complexe:"<<endl;
    c5.affiche();
    c6=c1-c2;
    cout<<"##soustraction complexe_complexe:"<<endl;
    c6.affiche();
    return 0;
}
