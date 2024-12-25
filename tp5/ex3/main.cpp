#include <iostream>
#include "point.h"
using namespace std;

int main()
{
    /*initialisation des points*/
    point p1(2.3,5.4);
    point p2(7.2,4.6);
    point p3(p1);
    /*affichage des points*/
    cout<<"les cordonnees du point 1 sonts:"<<endl;
    p1.affiche();
    cout<<"les cordonnees du point 2 sonts:"<<endl;
    p2.affiche();

    /* la comparaison des points deux a deux*/
    cout<<"est-ce-que les deux points sonts ils identiques???"<<endl;
    //if(p1.comparer(p3)==0)
    if(p1.comparer(p2)==0)
        cout<<"---->>NON"<<endl;
    else
        cout<<"---->>OUI"<<endl;

    /*calcul de la distance entre deux points*/
    cout<<"la distance entre deux points =";
    cout<<p1.distance(p2)<<endl;
    //cout<<p1.distance(p3)<<endl;
    point milieu;
    milieu=p1.milieu(p2);

    /*l'affichage du point milieu*/
    cout<<"les cordonnees du point milieu des deux points sont"<<endl;
    milieu.affiche();


    return 0;
}
