#include <iostream>
#include "Voiture.h"
#include "Camion.h"

int main() {

    Voiture v1(2022, 35000, 5);
    Camion c1(2021, 75000, 10);

    cout << "Voiture:" << endl;
    v1.afficher();
    v1.accelerer();

    cout << "\nCamion:" << endl;
    c1.afficher();
    c1.accelerer();

    return 0;
}
