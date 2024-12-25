#include "Vehicule.h"

int Vehicule::numeroSerie=1;
int Vehicule::numeroDansSerie=1;

Vehicule::Vehicule(int annee,double prix):annee(annee),prix(prix){
    if(numeroDansSerie>10000) {
        numeroDansSerie=1;
        numeroSerie++;
    }
    serie=numeroSerie;
    numero=numeroDansSerie;
    numeroDansSerie++;
}

void Vehicule::afficher() const {
    cout <<serie<<"TUN"<<numero
         <<"annee"<<annee
         <<"Prix"<<prix<<"TND"<<endl;
}
