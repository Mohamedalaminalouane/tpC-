#ifndef VEHICULE_H
#define VEHICULE_H

#include <iostream>
#include <string>
using namespace std;

class Vehicule {
    protected:
        static int numeroSerie;
        static int numeroDansSerie;
        int annee;
        double prix;
        int serie;
        int numero;

    public:
        Vehicule(int annee,double prix);
        virtual ~Vehicule() {}
        virtual void accelerer()const=0;
        virtual void afficher()const;
};

#endif // VEHICULE_H
