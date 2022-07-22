#include<iostream>
#include<cmath>
#include "Complex.h"
using namespace std;

Complex::Complex(){
  real=0;
  im=0;
}
Complex::Complex(double newreal, double newim){
  real=newreal;
  im=newim;
}
Complex::~Complex(){
}
void Complex::setReal(double newreal){
  real=newreal;
}
void Complex::setIm(double newim){
  im=newim;
}
double Complex::getReal(){
  return real;
}
double Complex::getIm(){
  return im;
}
void Complex::print(){
  if(im!=0){
    if(im<0)
    cout<<real<<" - "<< -im<<"i"<<endl;
    else
    cout<<real<<" + "<< im<<"i"<<endl;
  }
  else cout<<real<<endl;
}
Complex Complex::add(Complex a){
Complex addition(real+a.getReal(), im+a.getIm());
return addition;
}
Complex Complex::subs(Complex a){
Complex substraction(real-a.getReal(), im-a.getIm());
return substraction;
}
Complex Complex::multi(Complex a){
Complex multiplication(real*a.getReal(), im*a.getIm());
return multiplication;
}
Complex Complex::conjugate(){
  Complex conj(real, -im);
  return conj;
}
