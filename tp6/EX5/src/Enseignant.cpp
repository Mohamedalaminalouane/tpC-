#include "Enseignant.h"
#include "Personne.h"
#include <iostream>

using namespace std;

Enseignant::Enseignant(string nom,int age,string sexe,string charge):Personne(nom,age,sexe),charge(charge)
{
    //ctor
}
Enseignant::Enseignant()
{
    //ctor
}
string Enseignant::getPersonne(){
    return "je suis l'enseignant "+nom+" mon age est "+to_string(age)+" mon sexe "+sexe+" mon charge est "+charge;
}
Enseignant::~Enseignant()
{
    //dtor
}
