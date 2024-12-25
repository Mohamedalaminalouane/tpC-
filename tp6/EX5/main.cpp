#include <iostream>
#include "Contractuel.h"
#include "Personne.h"
#include "Etudiant.h"
#include "Enseignant.h"
using namespace std;

int main()
{
     Etudiant e ("amin",25,"masculin","cpi2");
     Enseignant en("salh",33,"masculin","Math");
     Contractuel c("salma",26,"feminin","Francais","fise2");
    cout<<e.getPersonne()<<endl;
    cout<<en.getPersonne()<<endl;
    cout<<c.getPersonne()<<endl;
    return 0;
}
