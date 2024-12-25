#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <iostream>

 using namespace std;

class etudiant
{
    public:
        etudiant();
        etudiant(int matricule,string nom,int nbrnote,const float tabNote[]);
        ~etudiant ();
        etudiant (const etudiant &);
        string getNom()const;
        int getNbrnote()const;
        void setNom(string);
        void setNbrnote(int);
        void saisie();
        void affichage();
        float moyenne()const;
        bool admis();
        static bool comparer(const etudiant& e1, const etudiant& e2);




    private:
        int matricule=0;
        string nom;
        int nbrnote;
        int *tabNote=new int[nbrnote];
};

#endif // ETUDIANT_H
