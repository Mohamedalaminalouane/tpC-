#ifndef PIECE_H
#define PIECE_H
#include <iostream>
using namespace std;
class Piece
{
    public:
        Piece();
        virtual ~Piece();
        Piece(string couleur,int x,int y);
        string Getcouleur() { return couleur; }
        void Setcouleur(string val) { couleur = val; }
        int Getx() { return x; }
        void Setx(int val) { x = val; }
        int Gety() { return y; }
        void Sety(int val) { y = val; }
         virtual void afficher();
         virtual void deplacer(int dx,int dy)=0;


    protected:
        string couleur;
        int x;
        int y;
};

#endif // PIECE_H
