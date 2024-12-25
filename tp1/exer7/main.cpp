#include <iostream>

using namespace std;
int facto(int &x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }return f;
}
int main()
{
    int n,f;
    cout << "donner la valeur de n" << endl;
    cin>>n;
    f=facto(n);
    cout<<"le factoriel de "<<n<<"="<<f;
    return 0;
}
