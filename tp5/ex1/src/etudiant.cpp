#include "etudiant.h"

etudiant::etudiant():matricule(0),nom(""),nbrnote(0)
{for (int i = 0; i < 10; i++) {
            tabNote[i] = 0.0f;
        }

}
etudiant::etudiant(int matricule,string nom,int nbrnote,const float tabNote[]){
    matricule++;
    this->nom=nom;
    this->nbrnote=nbrnote;

    for (int i = 0; i < nbrnote; i++) {
            this->tabNote[i] = tabNote[i];
        }
}

etudiant::~etudiant()
{

}
etudiant:: etudiant (const etudiant &e):matricule(e.matricule),nom(e.nom),nbrnote(e.nbrnote){
 for (int i = 0; i < nbrnote; i++) {
            tabNote[i] = e.tabNote[i];
        }
}
int etudiant:: getNbrnote()const{
return nbrnote;}
string etudiant:: getNom()const{
return nom;
}
void etudiant::setNbrnote(int nbrnote){
this->nbrnote=nbrnote;
}
void etudiant::setNom(string nom){
this->nom=nom;
}
void etudiant::saisie() {
        for (int i=0;i<nbrnote;i++) {
            float n;
            do{
                cout<<"enter note"<<i+1<<"(entre 0 et 20)";
                cin>>n;
            } while(n>0||n< 20);
            tabNote[i]=n;
        }
    }
void etudiant::affichage(){
    cout<<"la matricule de letudiant est "<<matricule<<endl;
    cout<<"le nom de l'etudiant est "<<nom<<endl;
    for(int i=1;i<nbrnote;i++){
        cout<<"la note num"<<i<<"="<<tabNote[i];
    }

}
float etudiant::moyenne( )const{
float moy=0.0f;
for(int i=0;i<nbrnote;i++){
    moy=moy+tabNote[i];

}
float moyenne=moy/nbrnote;
return moyenne;
}
bool etudiant::admis()  {
        return moyenne() >= 10.0f;
    }
 bool etudiant::comparer(const etudiant& e1, const etudiant& e2){
    return e1.moyenne() == e2.moyenne();
}


