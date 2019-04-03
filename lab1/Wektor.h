#ifndef LAB1_WEKTOR_H
#define LAB1_WEKTOR_H

#include <iostream>

using namespace std;

class Wektor {
private:
    double vx;
    double vy;
    double vz;
    static int dokladnosc;
public:
    Wektor();
    Wektor(double vx_, double vy_=1, double vz_=1);
    double get_vx(){return this->vx;}
    double set_vx(double vx_){this->vx = vx_;}
    double product(Wektor *a, Wektor *b);
    void wypisz();
    static void set_dokladnosc(int dokladnosc_){dokladnosc = dokladnosc_;}
    void zapisz(ostream &os);
    void wczytaj(istream &is);


};


#endif //LAB1_WEKTOR_H
