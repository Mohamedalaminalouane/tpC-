#include <iostream>

using namespace std;
int suite(int n){
    if (n==1)
        return 3;
    else{
    int u=3*suite(n-1)+4;
    return u;}
}
int main()
{
    int n;
    cout << "donner n" << endl;
    cin>>n;
    cout<<suite(n);
    return 0;
}
template<classe T ,classe U>
T GetMin(T a,U b){
return (a<b?a:b);}
