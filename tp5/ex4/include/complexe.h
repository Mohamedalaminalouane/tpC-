#ifndef COMPLEXE_H
#define COMPLEXE_H


class complexe
{
    public:
        complexe();
        complexe(double re,double img);
        virtual ~complexe();
        double getRe()const;
        double getImg()const;
        void setRe(double re);
        void setImg(double img);
        void affiche();
        double module();
        void conjugue();
friend   complexe  operator+(complexe a,complexe b);
friend   complexe  operator+(complexe a,double b);
friend   complexe  operator*(complexe a,complexe b);
friend   complexe  operator-(complexe a,complexe b);
    private:
    private:
        double re;
        double img;

};

#endif // COMPLEXE_H
