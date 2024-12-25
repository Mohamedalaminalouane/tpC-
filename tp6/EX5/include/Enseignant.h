#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H
#include "Personne.h"

class Enseignant :virtual public Personne
{
    public:
        Enseignant();
        Enseignant(string nom,int age,string sexe,string charge);
        virtual ~Enseignant();
        string getPersonne()override;
    protected:
        string charge;

};

#endif // ENSEIGNANT_H
