#include <iostream>
#include <vector>

using namespace std;
struct ville{
    string nom;
    double longitude;
    double latitude;
};
void remplir(vector<ville>&v){
    for(int i=0;i<3;i++){
        ville x;
        cout<<"donner le nom de la ville"<<endl;
        cin>>x.nom;
        cout<<"donner le longitude de la ville"<<endl;
        cin>>x.longitude;
        cout<<"donner la latitude de la ville"<<endl;
        cin>>x.latitude;
        v.push_back(x);

    }
    }
void recherche(vector<ville>&v,string n){
    for(auto &elm:v){
        if(elm.nom==n){
            cout<<"le longitude de la ville est "<<elm.longitude<<endl;
            cout<<"la latitude de la ville est "<<elm.latitude<<endl;
        }
    }
}
int main()
{
    vector<ville>v;
    ville x;
    remplir(v);
    string n;
    cout<<"donner le nom de la ville que tu cherche "<<endl;
    cin>>n;
    recherche(v, n);


    return 0;
}
