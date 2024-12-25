#include "Etudiant.h"
#include "Personne.h"
#include <iostream>

using namespace std;

Etudiant::Etudiant()
{
    //ctor
}
Etudiant::Etudiant(string nom,int age,string sexe,string filiere):Personne(nom,age,sexe),filiere(filiere)
{
    //ctor
}
string Etudiant::getPersonne(){
    return "je suis l'etudiant "+nom+" mon age est "+to_string(age)+" mon sexe "+sexe;
}
Etudiant::~Etudiant()
{
    //dtor
}
