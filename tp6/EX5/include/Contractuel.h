#ifndef CONTRACTUEL_H
#define CONTRACTUEL_H
#include "Etudiant.h"
#include "Enseignant.h"

class Contractuel:public Enseignant ,public Etudiant
{
    public:
        Contractuel();
        virtual ~Contractuel();
        Contractuel(string nom,int age,string sexe,string charge,string filiere);
        string getPersonne()override;
    protected:

    private:
};

#endif // CONTRACTUEL_H
