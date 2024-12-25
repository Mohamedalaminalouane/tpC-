#include <iostream>
#include "etudiant.h"

using namespace std;

int main() {
    float notes1[]={15.0,14.5,13.0,16.0,18.0};
    float notes2[]={10.0,12.0,11.5,14.0,13.0};
    etudiant et1(1,"Ali",5,notes1);
    etudiant et2(2,"Badr",5,notes2);

    cout <<"informations du premier etudiant:"<<endl;
    et1.affichage();

    cout<<"\nInformations du second etudiant:"<<endl;
    et2.affichage();

    cout<<"moyenne d'Ali:"<<et1.moyenne()<<endl;
    cout<<"moyenne de Badr:"<<et2.moyenne()<<endl;

    cout<<"Ali est admis?"<<(et1.admis() ? "Oui" : "Non") << endl;
    cout<<"Badr est admis?"<<(et2.admis() ? "Oui" : "Non") << endl;

    cout<<"Les deux etudiants ont-ils la meme moyenne ? "
         <<(et1.comparer(et1, et2) ? "Oui" : "Non")<<endl;
    etudiant et3;
    et3.setNom("Camel");
    et3.setNbrnote(3);
    cout << "\nSaisir les notes pour Camel:"<<endl;
    et3.saisie();

    float notes3[3] = {0}; // Tableau temporaire pour afficher les notes
    et3.affichage();

    return 0;
}
