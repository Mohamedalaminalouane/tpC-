#include <iostream>
#include <array>
using namespace std;
void remplir(array<int,5>&tab){
int i;
for(i=0;i<5;i++){
    cout<<"donner un entier";
    cin>>tab[i];
}
}
void recherche(array<int,5>tab,int v){
int i,h=0;
for(i=0;i<5;i++){
    if(tab[i]==v){
        cout<<"v  se trouve dans le tableau a la position "<<i<<endl;
        break;
    }
    if (tab[i]!=v && i==5-1)
 cout<<"v ne se trouve pas dans le tableau";
}}

int main()
{
    int n=5;
    int v=0;
    array<int,5>tab;
    remplir(tab);
    recherche(tab,v);

    return 0;
}
