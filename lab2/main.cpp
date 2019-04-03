#include <iostream>
#include "obiekty.h"

using namespace std;

int main() {
    Wektor v1 = Wektor(1,1,1);
    Wektor v2 = Wektor(1,2,3);
    Wektor v3 = Wektor(1,1,1);
    cout << v1 + v2;
    cout << -v1;
    Punkt p1 = Punkt (1, 2, 3);
    cout << p1;
    cout << ";;;;;" << endl;
    (p1 + v3).print();
    cout << ++p1;
    p1++.print();
    cout << p1;
    if(v1 > v2) cout << "true";
    else cout << "false" << endl;
    cout<< v1[0] << endl;
    cout << (float)v3 << endl;
    cout << (2 * v3) << endl;
    cout << v3 * 3;
    return 0;
}