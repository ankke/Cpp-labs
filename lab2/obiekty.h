#include<iostream>

using namespace std;

class Punkt;
class Wektor{
private:
    float x, y, z;

public:
    Wektor(float x=0, float y=0, float z=0);
    //void print();
    friend ostream& operator<<(ostream &s, const Wektor &m );
    Wektor& operator+=(const Wektor& v) {
        x += v.x;
        y += v.y;
        z += v.z;
        return *this;
    }
    Wektor operator+(const Wektor& v1) const;
    Wektor operator *(const int &i) const;
    float getx() const{return x;}
    float gety() const {return y;}
    float getz() const {return z;}
    Wektor operator -();
    friend Wektor operator *(const int &i, const Wektor &v);
    bool operator>(const Wektor& v1) const;
    float operator[](int i) const;
    operator float() const;
};

class Punkt{
private:
    float x, y, z;

public:
    Punkt(float x=0, float y=0, float z=0);
    float getx() const{return x;}
    float gety()const{return y;}
    float getz()const{return z;}
    void print()const;
    friend ostream& operator<<(ostream &s, Punkt &v);
    Punkt operator +(const Wektor &v);
    Punkt& operator++();
    const Punkt operator++(int);
};