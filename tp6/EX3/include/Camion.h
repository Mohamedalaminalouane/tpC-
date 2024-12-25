#ifndef CAMION_H
#define CAMION_H

#include "Vehicule.h"

class Camion : public Vehicule {
    private:
        double chargeMaximale;

    public:
        Camion(int annee, double prix, double chargeMaximale);
        virtual ~Camion() {}
        void accelerer() const override;
        void afficher() const override;
};

#endif // CAMION_H
