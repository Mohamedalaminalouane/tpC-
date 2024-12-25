#ifndef POINT_H
#define POINT_H


class point
{
    public:
        point();
        point(double x,double y);
        point(point & p);
        virtual ~point();
        double getX()const;
        double getY()const;
        void setX(double x);
        void setY(double y);
        void affiche();
        bool comparer(point &p);
        double distance (point &p);
        point milieu(point &p);



    private:
        double x;
        double y;
};

#endif // POINT_H
