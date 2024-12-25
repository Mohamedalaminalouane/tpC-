#include <iostream>
using namespace std;
/*void tesegal(int x,int y){
    if(x==y)
        cout<<"x et y sont egaux";
    else if (x>y)
        cout<<"x est superieur a y";
    else
        cout<<"y est superieur a x";
    }*/
/*void tesegal(int *x,int *y){
    if(*x==*y)
        cout<<"x et y sont egaux";
    else if (*x>*y)
        cout<<"x est superieur a y";
    else
        cout<<"y est superieur a x";
    }*/
    void tesegal(int &x,int &y){
    if(x==y)
        cout<<"x et y sont egaux";
    else if (x>y)
        cout<<"x est superieur a y";
    else
        cout<<"y est superieur a x";
    }
int main()
{
    int x=5,y=8;
    /*tesegal(x,y);
    tesegal(&x,&y);*/
    tesegal(x,y);
    return 0;
}
