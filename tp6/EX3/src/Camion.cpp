#include "Camion.h"

Camion::Camion(int annee, double prix, double chargeMaximale)
    : Vehicule(annee, prix), chargeMaximale(chargeMaximale) {}

void Camion::accelerer() const {
    cout << "Je peux atteindre 120km/h"<< endl;
}

void Camion::afficher() const {
    Vehicule::afficher();
    cout <<"Charge maximale:"<<chargeMaximale <<"tonne"<<endl;
}
