#ifndef VECTEUR3D_H
#define VECTEUR3D_H

#include <vector>
class vecteur3D
{
    public:
        vecteur3D();
        virtual ~vecteur3D();
        float getX()const;
        float getY()const;
        float getZ()const;

        void setX(float );
        void setY(float );
        void setZ(float );
        void afficher();
        vecteur3D somme(vecteur3D&v );
        float prodscal(vecteur3D&v);
        bool memcomp(vecteur3D&v);
        float norme();


    private:
        float x;
        float y;
        float z;
};

#endif // VECTEUR3D_H
