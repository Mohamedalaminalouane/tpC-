#include <iostream>

using namespace std;
//getline(cin,ch);
int main()
{
    string t[5];
    int i;
    string x;
    for(i=0;i<5;i++){
        cin>> x;
        t[i]=x;}
    string h=t[0];
    int y=t[0].length();
    for(i=0;i<5;i++){
    if(t[i].length()>y)
        h =t[i];

    }
    cout<<"le plus petit entier est"<<h;

    return 0;
}
