#include <iostream>
#include <random>
using namespace std;
void randint(){
int i;
for(i=0;i<10;i++){
   cout<<rand()%(40-10+1)+10<<endl;
}
}
int main()
{
    randint();
    cout<<"////////////////"<<endl;
    randint();
    cout<<"////////////////"<<endl;
    randint();
    cout<<"////////////////"<<endl;
    randint();
    cout<<"////////////////"<<endl;
    randint();
    return 0;
}
