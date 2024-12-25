#ifndef VECTEUR_H
#define VECTEUR_H


class vecteur
{
    public:
        vecteur();
        virtual ~vecteur();
        vecteur(float x,float y);
        float Getx() { return x; }
        void Setx(float val) { x = val; }
        float Gety() { return y; }
        void Sety(float val) { y = val; }
        void affiche();
        void deplacer(double dx,double dy);

    protected:
        float x;
        float y;
};

#endif // VECTEUR_H
