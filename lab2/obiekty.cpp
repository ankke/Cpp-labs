#include "obiekty.h"
#include <cmath>
Wektor::Wektor(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;

}

//void Wektor::print() {
//    cout << "[ " << this->x << ", " << this->y << ", " << this->z << "]" << endl;
//}

ostream& operator<<(ostream &s, const Wektor &m) {
    return s  << "[" << m.x << ", " << m.y << ", " << m.z << "]" << endl;
}

Wektor Wektor::operator+(const Wektor& v1) const {
    return Wektor(this->x + v1.x, this->y + v1.y, this->z + v1.z);
}

Wektor Wektor::operator * (const int &i) const{
    return Wektor(x*i, y*i, z * i);
}

Wektor Wektor::operator -(){
    return Wektor(-this->x, -this->y, -this->z);
}

bool Wektor::operator>(const Wektor& v1) const {
    return (this->x * this->x + this->y * this->y + this->z *this->z >
            v1.x * v1.x + v1.y * v1.y + v1.z * v1.z);
}

float Wektor::operator[](int i) const{
    if(i==0) return this->x;
    if(i==1) return this->y;
    if(i==2) return this->z;
}

Wektor::operator float() const{
    return sqrt(this->x * this->x + this->y * this->y + this->z *this->z );
}

Wektor operator *(const int &i, const Wektor &v){
    return Wektor(v.x *i, v.y * i, v.z* i);
}

Punkt::Punkt(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

void Punkt::print() const {
    cout<< "(" << this->x << ", "<< this->y << ", " << this->z << ")" << endl;
}

ostream& operator<<(ostream &s, Punkt &v) {
    return s << "(" << v.x << ", "<< v.y << ", " << v.z << ")" << endl;
}

Punkt Punkt::operator +(const Wektor &v){
    return Punkt(x+=v.getx(),y+=v.gety(), z+=v.getz() );
}

const Punkt Punkt::operator++(int){
    Punkt t = *this;
    this->x++;
    this->y++;
    return t;
}

Punkt& Punkt::operator++() {
    ++this->x;
    ++this->y;
    return *this;
}
