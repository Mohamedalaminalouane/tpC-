#ifndef ETUDIANT_H
#define ETUDIANT_H
#include "Personne.h"

class Etudiant:virtual public Personne
{
    public:
        Etudiant();
        Etudiant(string nom,int age,string sexe,string filiere);
        virtual ~Etudiant();
        string getPersonne()override;
    protected:
        string filiere;
};

#endif // ETUDIANT_H
