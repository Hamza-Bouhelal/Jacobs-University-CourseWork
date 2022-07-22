#include <iostream>
#include <math.h>
#include "Vector.h"
using namespace std;
Vector::Vector():n(3){
v=new double [3] {0,0,0};
}
Vector::Vector(int N, double*& Vn){
n=N;
v=Vn;
}
Vector::Vector(const Vector &a){
n=a.n;
v=a.v;
}
Vector::~Vector(){
  delete [] v;
}
void Vector::print(){
  cout<<"[ ";
  for(int i=0;i<n;i++){
  if(i==n-1)
  cout<<v[i]<<"]"<<endl;
  else
  cout<<v[i]<<" , ";
  }
}
void Vector::setN(int N){
  n=N;
}
void Vector::setVn(double*& Vn){
v=Vn;
}
int Vector::getN(){
  return n;
}
double* Vector::getVn(){
  return v;
}
double Vector::norm()const{
  double s=0.0;
  for(int i=0;i<n;i++)
  s=s+v[i]*v[i];
  return sqrt(s);
}
Vector Vector::add(const Vector &a)const{
  double *vn=new double[n];
  if(n==a.n){
    for(int i=0;i<n;i++){
       vn[i]=v[i]+a.v[i];
    }
  }
  Vector v(n, vn);
  return v;
}
Vector Vector::diff(const Vector &a)const{
  double *vn=new double [n];
  if(n==a.n){
    for(int i=0;i<n;i++){
       vn[i]=v[i]-a.v[i];
    }
  }
  Vector v(n, vn);
  return v;
}
double Vector::scal(Vector &a)const{
  double s=0;
  if(n==a.n){
    for(int i=0;i<n;i++){
      s=s+v[i]*a.v[i];
    }
  }
  return s;
}

