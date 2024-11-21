#include <iostream>
#include <vector>
using namespace std;
void remplir(vector<int> &tab,int n){
int x,i;
for(i=0;i<n;i++){
cout<<"donner un entier";
cin>>x;
tab.push_back(x);}
}
int valentier(vector<int> tab){
    int w=0;
    for(int el:tab){
        if (el>0)
            w++;
    }
    return w;
}


int main()
{
    int n;
    vector<int>tab;
    cout << "donner la taille du vector" << endl;
    cin>>n;
    remplir(tab,n);
    cout<<"le nombre des entiers positifs ="<<valentier(tab);
    return 0;
}
