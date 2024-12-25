#ifndef VOITURE_H
#define VOITURE_H
#include "Vehicule.h"

class Voiture :public Vehicule {
    private:
        int nombreDePlaces;

    public:
        Voiture(int annee,double prix,int nombreDePlaces);
        virtual ~Voiture(){}
        void accelerer()const override;
        void afficher()const override;
};

#endif // VOITURE_H
