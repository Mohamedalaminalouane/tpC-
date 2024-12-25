#ifndef VECTEUR3D_H
#define VECTEUR3D_H
#include "vecteur.h"

class vecteur3D :public vecteur
{
    public:
        vecteur3D();
        virtual ~vecteur3D();
        vecteur3D(float x,float y ,float z);
        float Getz() { return z; }
        void Setz(float val) { z = val; }
        void affiche();
        void deplacer(double dx,double dy,double dz);

    protected:

    private:
        float z;
};

#endif // VECTEUR3D_H
