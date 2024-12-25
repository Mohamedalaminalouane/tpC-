#include <iostream>

using namespace std;

int main()
{
    int choix;
    cout <<"choisir l'unite de conversion :(1km,0:miles)"<<endl;
    cin>>choix;
    cout<<"donner la valeur a convertir:"<<endl;
    double val;
    cin>>val;
    if(choix==1)
        cout<<val<<"km="<<val*0.6<<"miles";
    else
        cout<<val<<"miles="<<val*1.6<<"km";
    return 0;
}
