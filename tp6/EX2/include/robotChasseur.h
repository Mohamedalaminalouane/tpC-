#ifndef ROBOTCHASSEUR_H
#define ROBOTCHASSEUR_H
#include "robot.h"

class robotChasseur:public robot
{
    public:
        robotChasseur();
        virtual ~robotChasseur();
        robotChasseur(string nom,double x,double y,double porte);

        void tuer(robot &r);

    protected:

    private:
};

#endif // ROBOTCHASSEUR_H
