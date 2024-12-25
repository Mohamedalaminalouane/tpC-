#include <iostream>
#include <math.h>
using namespace std;

double distance(double x,double y,double z,double w){
    return sqrt(pow(x-y,2)+pow(z-w,2));
}
int main()
{
    double xa,xb,ya,yb;
    cout<<"entrer les coordonnées des deux points"<<endl;
    cin>>xa>>xb>>ya>>yb;
    cout<<"la distance entre a et b ="<<distance(xb,xa,yb,ya);
    return 0;
}
