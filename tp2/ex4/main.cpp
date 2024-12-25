#include <iostream>
using namespace std;
float calculatrice(int &x,int &y,int &op){

   if (op==1)
    return x+y;
   if (op==2)
    return x*y;
   if (op==3)
    return x-y;
   if (op==4)
    return x/y;
}
void menu(){
cout<<"*******calculatrice*********"<<endl;
cout<<"*1.Addition              ***"<<endl;
cout<<"*2.Multiplication        ***"<<endl;
cout<<"*3.Soustraction          ***"<<endl;
cout<<"*4.Division              ***"<<endl;
cout<<"*5.Quitter               ***"<<endl;
cout<<"****************************"<<endl;
cout<<" operation?"<<endl;
}
int main()
{
    int x,y,op;
    bool quitte=false;
    while (!quitte) {
        system("cls");
        menu();
            cout << "donner lopperateur" << endl;
            cin>>op;

        if (op==5) {
            quitte=true;
            break;
        }
    cout << "donner x et y" << endl;
    cin>>x>>y;

    cout<<"result="<<calculatrice(x,y,op);


    return 0;
}}
