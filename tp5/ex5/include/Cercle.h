#ifndef CERCLE_H
#define CERCLE_H

#include "Cercle.h"
class Cercle
{
    public:
        Cercle();
        Cercle(double r,point p);
        Cercle(double r,double x,double y);
        virtual ~Cercle();
        void affiche();
        double GetRayon() { return rayon; }
        void SetRayon(double val) { rayon = val; }
        point GetCentre() { return centre; }
        void SetCentre(point centre) { this->centre = centre; }
        double surface();
        double perimetre();
        void trans(double a,double y);

        bool egalite(Cercle &c);






    protected:
        double rayon;
        point centre;
};

#endif // CERCLE_H
