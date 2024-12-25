#include <iostream>

using namespace std;
void swap1(int &x,int &y){
    int z=x;
    x=y;
    y=z;



}
void swap2(int &x,int &y){
    x=x+y;
    y=x-y;
    x=x-y;
}
int main()
{
    int x,y,z;
    cout << "donner les valeurs respectives de x et y" << endl;
    cin>>x>>y;
    //swap1( x, y);
    swap2(x,y);
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;


    return 0;
}
