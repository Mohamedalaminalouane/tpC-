#include <iostream>
#include <array>
#include <tuple>
using namespace std;
void remplir(array<int,5>&tab){
int i;
for(i=0;i<5;i++){
    cout<<"donner un entier";
    cin>>tab[i];
}
}
tuple<int ,int > minimax(array<int,5>&tab){
    int mini=tab[0];
    int maxi=tab[0];
    for(int i=0;i<tab.size();i++){
        if(tab[i]<mini)
            mini=tab[i];
        if(tab[i]>maxi)
            maxi=tab[i];
    }
    return{mini,maxi};
}
int main()
{
    array<int,5>tab;
    remplir(tab);
    auto[mini ,maxi ] =minimax(tab);
    cout<<"le minimum du tableau est"<<mini<<endl;
    cout<<"le maximum du tableau est"<<maxi<<endl;
    return 0;
}
