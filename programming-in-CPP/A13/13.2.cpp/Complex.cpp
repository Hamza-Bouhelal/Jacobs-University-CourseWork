#include <cstdlib>
#include <iostream>
#include "Complex.h"
#include <string>
using namespace std;

Complex::~Complex(){
}
Complex::Complex(){
  real = 0;
  im = 0;
}
Complex::Complex(double rea, double ima){
  real = rea;
  im = ima;
}
Complex::Complex(const Complex& a){
  real = a.real;
  im = a.im;
}
//setter methods
void Complex::setReal(double re){
  real = re;

}
void Complex::setImaginary(double ima){
  im = ima;

}
//getter methods
double Complex::getReal(){
  return real;
}
double Complex::getImaginary(){
  return im;
}
void Complex::print(){
  cout<<real<<" + "<<im<<"i"<<endl;
}

Complex Complex::add(Complex a){
  Complex result;

  result.real = real + a.real;
  result.im = im + a.im;

  return result;
}
Complex Complex::subs(Complex a){
  Complex result;
  result.im = im - a.im;
  result.real = real - a.real;
  return result;

}

Complex Complex::multi(Complex a){
  Complex result;
  result.im = (im * a.real+ real * a.im);
  result.real = (real * a.real - im * a.im);
  return result;
}

Complex Complex::divide(Complex a){
  Complex result;
  result.im = im / a.im;
  result.real = real / a.real;
  return result;
}
void Complex::conjugate(){
  if (im > 0){
    cout<<real<<" - "<<im<<"i"<<endl;
  }
  else{
    cout<<real<<" + "<<im *-1<<"i"<<endl;
  }
}
Complex Complex::operator+(const Complex& c){
    Complex result;
    result.real = this->real + c.real;
    result.im = this->im + c.im;
    return result;

}
Complex Complex::operator-(const Complex& c){
  return this->subs(c);
}
Complex Complex::operator*(const Complex& x){
  return this->multi(x);
}
Complex Complex::operator/(const Complex& c){
  return this->divide(c);
}
Complex& Complex::operator= (const Complex& a){
 this->real = a.real;
 this->im = a.im;
 return *this;
}
std::istream& operator>>(std::istream&in, Complex& a){
    string c;
    string tempimaginary;

    in>> a.real >>c>>tempimaginary;
    if (tempimaginary.length()-1 == 'i')
        tempimaginary[tempimaginary.length()-1] = '\0';
    a.im = stod(tempimaginary);
  return in;
}
std::ostream& operator<<(std::ostream &out, const Complex& c){
  return out<< c.real <<" + "<<c.im<<"i";
}
