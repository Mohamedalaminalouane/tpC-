#ifndef ROI_H
#define ROI_H
#include "Piece.h"

class Roi:public Piece
{
    public:
        Roi(string couleur, int x, int y);
        virtual ~Roi();
        Roi();
        void afficher()override;
        void deplacer(int dx,int dy)override;
    protected:

    private:
};

#endif // ROI_H
