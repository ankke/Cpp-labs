#include "Wektor.h"
#include <iostream>
#include <iomanip>


using namespace std;

int Wektor::dokladnosc = 3;

Wektor::Wektor() {
    this->vx = 1.0;
    this->vy=1.0;
    this->vz = 1.0;
}

Wektor::Wektor(double vx_, double vy_, double vz_) {
    this->vx = vx_;
    this->vy=vy_;
    this->vz = vz_;
}

double Wektor::product(Wektor *a, Wektor *b) {
    return (a->vx*b->vx)+(a->vy*b->vy)+(a->vz*b->vz);
}

void Wektor::wypisz() {
    cout << fixed << setprecision(Wektor::dokladnosc);
    cout << this->vx << ";" <<  this->vy << ";" << this->vz<< ";" << endl;
}

void Wektor::zapisz(ostream &os){
    cout << "[" << fixed <<setprecision(Wektor::dokladnosc) << this->vx << "; "<<
    fixed << setprecision(Wektor::dokladnosc) << this -> vy << "; "<< fixed<<
    setprecision(Wektor::dokladnosc)<< this -> vz<< "]" << endl;
}

void Wektor::wczytaj(istream &is) {
    string s1;
    string s2;
    string s;
    is >> s1;
    is >> this->vx;
    cout << this->vx << endl;
    is >> s2;
    is >> this->vy;
    cout << this->vy << endl;
    is >> s1 ;
//    is >> this->vz ;
//    is>> s2 >> s2;
    is.clear();
    is.ignore(256, '\n');
    cout << "tutaj";
    }






