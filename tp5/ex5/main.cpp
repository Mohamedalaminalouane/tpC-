#include <iostream>

using namespace std;

int main()
{
    Cercle c1(1,10,10);
    c1.affiche();

    cout<<"Perim�tre:"<<c1.perimetre()<<endl;
    cout <<"Surface:" <<c1.surface()<<endl;
    c1.setRayon(c1.getRayon()*2);
    cout<<"apres doublement du rayon:"<<endl;
    cout <<"P�rim�tre:"<<c1.perimetre()<< endl;
    cout <<"Surface:"<<c1.surface()<< endl;


    c1.trans(-10,10);
    cout << "Apr�s- translation du centre :" << endl;
    c1.affiche();

    Cercle c2(2, 0, 0);
    cout << "Le cercle est �gal au cercle de centre (0,0) et rayon 2 : " << (c1.egalite(c2) ? "Oui" : "Non") << endl;


    return 0;
}
