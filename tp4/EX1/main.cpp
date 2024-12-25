#include <iostream>
#include <string>
using namespace std;
template <typename T>
void echang(T&a, T&b) {
    T H=a;
    a=b;
    b=H;
}

template <typename T>
void trier(T tab[],int n) {
    for (int i=0;i<n-1;i++) {
        int indMin=i;

        for (int j=i+1;j<n;j++) {
            if (tab[j]<tab[indMin]) {
                indMin=j;
            }
        }
        if (indMin!=i) {
            echang(tab[i], tab[indMin]);
        }
    }
}

int main() {

    int tab[10]={10,3,7,2,8,1,5,4,6,9};
    cout<<"le tableau avant le tri "<<endl;
    for(int i=0;i<10;i++) {
        cout<<tab[i]<<" ";
    }
    cout<<endl;
    trier(tab,10);
    cout<<" le tableau apres le tri "<<endl;
    for(int i=0;i<10;i++) {
        cout<<tab[i];
    }
    return 0;
}
