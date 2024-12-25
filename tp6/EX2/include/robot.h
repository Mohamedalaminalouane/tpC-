#ifndef ROBOT_H
#define ROBOT_H
#include <iostream>

using namespace std;

class robot
{
    public:
        robot();
        virtual ~robot();
        robot(string nom,double x,double y,double porte);
        string Getnom() { return nom; }
        void Setnom(string val) { nom = val; }
        double Getx() { return x; }
        void Setx(double val) { x = val; }
        double Gety() { return y; }
        void Sety(double val) { y = val; }
        double Getporte() { return porte; }
        void Setporte(double val) { porte = val; }

        void deplacer(double dx,double dy);
        void afficher();
        double distance( robot& r);

        bool stMort(){ return estMort;}
        void setMort(){estMort=true;}
    public:
        string nom;
        double x;
        double y;
        double porte;
        bool estMort;


};

#endif // ROBOT_H
