#include <iostream>
using namespace std;
/*int incrementer(int *x){
    return (*x=*x+1);
}
void permuter(int *x,int *y){
int z=*x;
*x=*y;
*y=z;
}*/
int incrementer(int &x){
    return (x=x+1);
}
void permuter(int &x,int &y){
int z=x;
x=y;
y=z;}
int main()
{
    int x=5;
    int w=9,y=7;
    /*cout<<incrementer(&x)<<endl;
    permuter(&w,&y);
    cout<<"le contenue de w ="<<w<<endl;
    cout<<"le contenue de y ="<<y<<endl;
    */
    cout<<"x avant l'incrementation"<<x<<endl;
    cout<<"x apres l'incrementation"<<incrementer(x)<<endl;
    permuter(w,y);
    cout<<"le contenue de w ="<<w<<endl;
    cout<<"le contenue de y ="<<y<<endl;
    return 0;
}
