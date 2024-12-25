#include <iostream>
using namespace std;
void cone(int &N,int &nbb){
    int nbetoils=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N-i-1;j++){
            cout<<" ";
        }
    for(int j=0;j<2*i-1;j++){
        if (nbb>0&&(rand()%2==0)) {
                cout<<"O";
                nbb--;
            } else{
                cout << "*";
            }
            nbetoils++;
        }
    cout<<endl;
    }
    }
void tranc(int &ht,int &lr,int N){
    for(int i=0;i<ht;i++){
        for(int j=0;j<N/2;j++){
            cout<<" ";
        }
    for(int i=0;i<lr;i++){
        cout<<"|";
    }
    cout<<endl;
    }
}
int main()
{
    int N,lr,ht,nbb;
    cout << "donner la hauteur du cone" << endl;
    cin>>N;
    cout << "donner la largeur du tranc" << endl;
    cin>>lr;
    cout << "donner la hauteur du tranc" << endl;
    cin>>ht;
    cout << "donner le nombre de boules" << endl;
    cin>>nbb;
    cone(N,nbb);
    tranc(ht,lr,N);

    return 0;
}
