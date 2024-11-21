#include <iostream>
#include <vector>
using namespace std;
void remplir(vector<int>&vec1,vector<int>&vec2,int n){
    int x,y;
    for(int i=0;i<n;i++){
        cout<<"donner x"<<endl;
        cin>>x;
        vec1.push_back(x);
        cout<<"donner y"<<endl;
        cin>>y;
        vec2.push_back(y);
    }
}
int prodscal(vector<int>&vec1,vector<int>&vec2,int n){
    int p=0;
    for(int i=0;i<n;i++){
        p+=vec1[i]*vec2[i];
    }
    return p;
}
int main()
{
    int n;
    cout << "donner la taille du vecteur" << endl;
    cin>>n;
    vector<int>vec1;
    vector<int>vec2;
    remplir(vec1,vec2, n);
    cout<<"le produit scalaire de U et V="<<prodscal(vec1,vec2, n);
    return 0;
}
