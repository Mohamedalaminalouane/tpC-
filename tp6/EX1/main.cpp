#include <iostream>
#include "vecteur.h"
#include "vecteur3D.h"
using namespace std;

int main()
{
    vecteur v;
    vecteur v1(3,6);
    v.affiche();
    v1.affiche();
    v1.deplacer(2,3);
    v1.affiche();
    vecteur3D *v2=new vecteur3D(2,3,4);
    v2->affiche();
    v2->deplacer(2,2,2);
    v2->affiche();
    return 0;
}
