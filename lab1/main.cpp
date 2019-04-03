#include <iostream>
#include "Wektor.h"

int main() {
    Wektor v =Wektor(1.1234,2.10,3.12345);
    Wektor v2 = Wektor();
    v2.wypisz();
    v.zapisz(cout);
    v.wczytaj(cin);
    v.zapisz(cout);
    return 0;
}