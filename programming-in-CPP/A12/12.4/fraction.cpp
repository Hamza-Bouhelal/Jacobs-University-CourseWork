#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	if(a==0)
  return b;
  else if (b==0)
  return a;
  else if(a==b)
  return a;
  //recursive function
  else if(a<b)
  return Fraction::gcd(a,b-a);
  else{
  return Fraction::gcd(a-b,b);
  }
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

void Fraction::print()
{
	std::cout << num << "/" << den << std::endl;
}
std::ostream& operator<<(std::ostream & out, const Fraction& a){
  if(a.den==1){
    out<<a.num;
  }
  else if(a.den==0){
    std::cout<<"Error: denominator=0"<<std::endl;
  }
  else{
  out<<a.num<<"/"<<a.den<<std::endl;
  }
  return out;
}
std::istream& operator>>(std::istream & in, Fraction& a){
  int d;
  in>>a.num>>d;
  if(d==0){
    std::cout<<"Enter a denominator different from 0: ";
    std::cin>>d;
  }
  a.den=d;
  return in;
}
Fraction Fraction::operator *(Fraction a){
  Fraction p;
  p.num=num*a.num/gcd(num*a.num,den*a.den);
  p.den=den*a.den/gcd(num*a.num,den*a.den);
  return p;
}
Fraction Fraction::operator /(Fraction a){
Fraction q;
q.num=num*a.den*gcd(num*a.den,den*a.num);
q.den=den*a.num*gcd(num*a.den,den*a.num);
return q;
}
