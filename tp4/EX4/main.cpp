#include <iostream>
#include <string>
using namespace std;

struct Produit {
    string type;
    double prixHT;
    bool solde;
    };
double calculerPrix(const Produit& produit) {
    double taxe=(produit.type=="luxe")? 0.25:0.19;
    double prixTTC =produit.prixHT*(1+taxe);
    if(produit.solde){
        prixTTC*=0.80;
    }

    return prixTTC;
    }
int main(){
    Produit p1={"normal",100.0,false};
    Produit p2={"luxe",200.0,true};
    Produit p3={"normal",50.0,true};
    Produit p4={"luxe",300.0,false};


    cout<<"Produit 1 Prix net="<<calculerPrix(p1) << endl;
    cout<<"Produit 2 Prix net="<<calculerPrix(p2)<<endl;
    cout<<"Produit 3 Prix net="<<calculerPrix(p3)<<endl;
    cout<<"Produit 4 Prix net="<<calculerPrix(p4)<< endl;

    return 0;
}
