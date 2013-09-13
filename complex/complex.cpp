#include"complex.h"
Complex::Complex(double r, double i) {re=r; im=i;}
Complex::Complex(const Complex & x){
    this->re = x.re;
    this->im = x.im;
}
istream &operator>>(istream &fi, Complex &x) {
    char c;
    fi>>x.re>>c;
    if (c=='-') {
        fi>>c>>x.im;
        x.im=-x.im;
    }
    else fi>>c>>x.im;
    return fi;
}
ostream &operator<<(ostream &fo, const Complex &x) {
    fo<<x.re;
    if (x.im<0) fo<<"-i"<<(-x.im); else fo<<"+i"<<x.im; return fo;
}
Complex& Complex::operator +(Complex &x){this->re=this->re+ x.re; this->im=x.im+this->im; return *this;}
Complex& Complex::operator -(Complex &x){this->re=this->re- x.re; this->im=this->im -x.im; return *this;}
Complex& Complex::operator *(Complex &x){this->re=this->re*x.re-this->im*x.im; this->im=this->re*x.im+this->im*x.re; return *this;}
Complex& Complex::operator /(Complex &x){
    if ((x.re==0) && (x.im==0)) {this->im=0; this->re=0; goto lab;}
    this->re=(this->re*x.re+this->im*x.im)/(x.re*x.re + x.im*x.im);
    this->im=(this->im*x.re-this->re*x.im)/(x.re*x.re + x.im*x.im);
    lab: return *this;
}
Complex& Complex::operator +(double x){re=re+x ; return *this;}
Complex& Complex::operator -(double x){re-=x; return *this;}
Complex& Complex::operator *(double x){re*=x; im*=x; return *this;}
Complex& Complex::operator /(double x){re/=x; im/=x; return *this;}
