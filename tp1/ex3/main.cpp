#include <iostream>
#include <array>
using namespace std;

int main()
{
    cout<<"donner le nombre de mots"<<endl;
    int n;
    cin>>n;
    string tab[n];
    for(int i=0;i<n;i++){
        cin>>tab[i];
    }
    string m=tab[0];
    for(int i=0;i<n;i++){
        if((tab[i].length())>m.length()){
           m=tab[i];}
    }

   cout<<"le mot le plus long est "<<m;






    return 0;
}
