#include "Personne.h"
#include <iostream>

using namespace std;

Personne::Personne()
{
    //ctor
}
Personne::Personne(string nom,int age,string sexe):nom(nom),age(age),sexe(sexe)
{
    //ctor
}
string Personne::getPersonne(){
    return "mon nom est"+nom+"mon age est"+to_string(age)+"mon sexe"+sexe;
}
Personne::~Personne()
{
    //dtor
}
