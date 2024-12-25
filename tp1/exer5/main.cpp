#include <iostream>
#include <cmath>
using namespace std;
double f(double x,bool&ok){
    double y=(x-1)*(2-x);
    if(y>0){
        ok=true;
        return sqrt(y);
    }
    else{
        ok=false ;
        return 0;
    }
}
int main()
{
    double x;
    bool ok;
    cout << "donner la valeur de x" << endl;
    cin>>x;
    cout<<f( x,ok);
    return 0;
}
