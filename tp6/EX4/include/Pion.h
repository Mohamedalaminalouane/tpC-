#ifndef PION_H
#define PION_H
#include "Piece.h"

class Pion:public Piece
{
    public:
        Pion(string couleur,int x,int y);
        virtual ~Pion();
        Pion();
        void afficher()override;
        void deplacer(int dx,int dy)override;
    protected:

    private:
};

#endif // PION_H
