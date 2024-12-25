#include "Pion.h"
#include "Piece.h"
#include <iostream>

using namespace std;

Pion::Pion()
{
    //ctor
}

Pion::Pion(string couleur,int x,int y):Piece(couleur,x,y)
{
    //ctor
}


void Pion::afficher(){
    cout<<"Pion couleur: "<<Getcouleur()<<" position ("<<Getx()<<","<<Gety()<<")"<<endl;

}
void Pion::deplacer(int dx,int dy){
    y+=dy;
    if(y>8){
        cout<<"la position depasse la limite de l'echiquier"<<endl;
        y-=dy;
    }

    }
Pion::~Pion()
{
    //dtor
}
