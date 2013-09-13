#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;
class Complex {
    private:
        double re,im;
    public:
        Complex(){re=0;im=0;}
        Complex(double, double);
        ~Complex(){};
        Complex(const Complex&);
        friend istream& operator>>(istream &fi, Complex &x);
        friend ostream& operator<<(ostream &fo, const Complex &x);
        Complex& operator +(Complex&);
        Complex& operator -(Complex&);
        Complex& operator *(Complex&);
        Complex& operator /(Complex&);
        Complex& operator +(double);
        Complex& operator -(double);
        Complex& operator *(double);
        Complex& operator /(double);
        Complex& operator- () { re=-re; im=-im; return *this;}
        Complex& operator! () { im=-im; return *this;}
};
#endif