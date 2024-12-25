#include "Piece.h"
#include <iostream>

using namespace std;

Piece::Piece()
{
    //ctor
}
Piece::Piece(string couleur,int x,int y):couleur(couleur),x(x),y(y)
{
    //ctor
}
void Piece::afficher(){
    cout<<"Piece ,couleur:"<<couleur<<"position("<<x<<","<<y<<")"<<endl;

}
Piece::~Piece()
{
    //dtor
}
