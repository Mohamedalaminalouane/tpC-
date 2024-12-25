#include <iostream>
#include <vector>
#include "Robot.h"
#include "RobotChasseur.h"

int main() {

    robotChasseur optimus("Optimus",2,3,25);
    cout<<"informations sur Optimus"<<endl;
    optimus.afficher();
    optimus.deplacer(33,19);
    cout<<"apres deplacer Optimos"<<endl;
    optimus.afficher();
    vector<robot>robots={
        robot("Megatron",30,20,10),
        robot("Neon",40,25,10),
        robot("Sova",10,10,10),
        robot("Reyna",36,22,10),
        robot("Jett",50,50,10)
    };

    cout<<"otre robot"<< endl;
    for (robot& r:robots) {
        r.afficher();
    }

    cout <<"Optimus commance a tuer" << endl;
    for (robot& r:robots) {
        optimus.tuer(r);
    }


    return 0;
}
