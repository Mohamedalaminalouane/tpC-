#ifndef PERSONNE_H
#define PERSONNE_H
#include <iostream>

using namespace std;


class Personne
{
    public:
        Personne();
        virtual ~Personne();
        Personne(string nom,int age,string sexe);
        string Getnom() { return nom; }
        void Setnom(string val) { nom = val; }
        int Getage() { return age; }
        void Setage(int val) { age = val; }
        string Getsexe() { return sexe; }
        void Setsexe(string val) { sexe = val; }
        virtual string getPersonne()=0;
    protected:
        string nom;
        int age;
        string sexe;

    private:
};

#endif // PERSONNE_H
