#include "Voiture.h"

Voiture::Voiture(int annee,double prix,int nombreDePlaces)
    : Vehicule(annee, prix),nombreDePlaces(nombreDePlaces) {}

void Voiture::accelerer()const {
    cout << "Je peux atteindre 200km/h"<< endl;
}

void Voiture::afficher()const {
    Vehicule::afficher();
    cout <<"Nombre de places:"<<nombreDePlaces<<endl;
}
