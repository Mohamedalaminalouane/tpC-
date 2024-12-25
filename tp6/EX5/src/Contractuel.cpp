#include "Contractuel.h"
#include "Personne.h"
#include "Etudiant.h"
#include "Enseignant.h"
#include <iostream>

using namespace std;

Contractuel::Contractuel(string nom,int age,string sexe,string charge,string filiere):Personne(nom,age,sexe),Enseignant(nom,age,sexe,charge),Etudiant(nom,age,sexe,filiere)
{
    //ctor
}
string Contractuel::getPersonne(){
    return "je suis le contractuel "+nom+" mon age est "+to_string(age)+" mon sexe "+sexe+" mon charge est "+charge+" ma filiere est "+filiere;
}
Contractuel::~Contractuel()
{
    //dtor
}
