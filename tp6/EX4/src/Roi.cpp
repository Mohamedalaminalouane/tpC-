#include "Roi.h"
#include "Pion.h"
#include "Piece.h"
#include <iostream>

using namespace std;
Roi::Roi()
{
    //ctor
}
Roi::Roi(string couleur,int x,int y):Piece(couleur,x,y)
{
    //ctor
}
void Roi::deplacer(int dx,int dy){
    if(abs(dx)<=1 && abs(dy)<=1){
        x+=dx;
        y+=dy;
        if(x<1 || x>8 || y<1 || y>8) {
            cout<<"deplacement hors des limites de l'échiquier"<<endl;
            x-=dx;
            y-=dy;
        }
    } else{
        cout<<"deplacement non valide pour un roi"<<endl;
    }
}
void Roi::afficher(){
    cout<<"Roi couleur: "<<couleur<<" position ("<<x<<","<<y<<")"<<endl;
}
Roi::~Roi()
{
    //dtor
}
