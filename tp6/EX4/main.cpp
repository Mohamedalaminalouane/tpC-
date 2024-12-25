#include <iostream>
#include <vector>
#include "Piece.h"
#include "Roi.h"
#include "Pion.h"
using namespace std;

int main()
{
    vector<Piece*> pieces;
    pieces.push_back(new Pion("blanc", 1, 2));
    pieces.push_back(new Pion("noir", 3, 4));
    pieces.push_back(new Roi("blanc", 5, 5));
    cout<<"position avant deplacement"<<endl;
    for(auto&piece:pieces){
        piece->afficher();
    }
    pieces[0]->deplacer(1,1);
    pieces[1]->deplacer(1,0);
    pieces[2]->deplacer(1,1);

    cout<<"position apres deplacement"<<endl;
    for(auto&piece:pieces){
        piece->afficher();
    }
    return 0;
}
