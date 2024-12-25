#include "complexe.h"
#include <iostream>
#include <cmath>
using namespace std;
complexe::complexe()
{
    //ctor
}
complexe::complexe(double re=0,double img=0):re(re),img(img)
{
    //ctor
}
complexe::~complexe()
{
    //dtor
}
double complexe::getRe ()const{return re;}
double complexe::getImg()const{return img;}
void complexe::setRe(double re){this->re=re;}
void complexe::setImg(double img){this->img=img;}
void complexe::affiche(){
    cout<<"la partie reelle du complexe est"<<endl;
    cout<<re<<endl;
    cout<<"la partie imaginaire du complexe est"<<endl;
    cout<<img<<endl;
}
double complexe::module(){
    return sqrt((re*re)+(img*img));
}
void complexe::conjugue(){
    cout<<"z="<<re<<-img<<"i"<<endl;
}
complexe  operator+(complexe a,complexe b){
    return complexe(a.re+b.re,a.img+b.img);
}
complexe  operator+(complexe a,double b){
    return complexe(a.re+b,a.img);
}
complexe  operator*(complexe a,complexe b){
    return complexe((a.re*b.re)-(a.img*b.img),(a.re*b.img)+(a.img*b.re));
}
complexe  operator-(complexe a,complexe b){
    return complexe(a.re-b.re,a.img-b.img);
}
