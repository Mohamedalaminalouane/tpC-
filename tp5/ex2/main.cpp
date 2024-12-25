#include <iostream>
#include "vecteur3D.h"
using namespace std;

int main()
{

    vecteur3D v1;
    vecteur3D v2;

    v1.setX(5.2f);
    v1.setY(7.1f);
    v1.setZ(6.8f);
    v2.setX(1.2f);
    v2.setY(2.1f);
    v2.setZ(3.8f);
    cout<<"les cordonne de v1 sonts"<<endl;
    v1.afficher();
    cout<<"les cordonne de v2 sonts"<<endl;
    v2.afficher();
    vecteur3D v3=v1.somme(v2);
    cout<<"la somme des deux vecteurs est="<<endl;
    v3.afficher();
    cout<<"le produit scalaire des deux vecteurs est"<<endl;
    cout<<v1.prodscal(v2)<<endl;
    cout<<"est ce que les deux vecteurs ont la meme composition"<<endl;
    if(v1.memcomp(v2)==0)
        cout<<"NON"<<endl;
    else cout<<"OUI"<<endl;
    cout<<"la norme de v1 est"<<v1.norme();
    return 0;
}
