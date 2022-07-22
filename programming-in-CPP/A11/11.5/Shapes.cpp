// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"

using namespace std;

Shape::Shape(){
  name="Default name";
}
Shape::Shape(const string& n) : name(n) {
}
Shape::Shape(const Shape& a){
name=a.name;
}

void Shape::printName() const {
	cout << name << endl;
}
void Shape::setName(const string& n){
  name=n;
}
string& Shape::getName(){
  return name;
}
CenteredShape::CenteredShape(){
  x=0;
  y=0;
}
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}
CenteredShape::CenteredShape(const CenteredShape& a){
  x=a.x;
  y=a.y;

}
void CenteredShape::setX(double nx){
  x=nx;
}
double CenteredShape::getX(){
return x;
}
void CenteredShape::setY(double ny){
  x=ny;
}
double CenteredShape::getY(){
return y;
}
RegularPolygon::RegularPolygon(){
  EdgesNumber =0;
}
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny)
{
	EdgesNumber = nl;
}
RegularPolygon::RegularPolygon(const RegularPolygon &a){
  EdgesNumber=a.EdgesNumber;
}
void RegularPolygon::setEn(int nl){
  EdgesNumber = nl;
}
int RegularPolygon::getEn(){
  return EdgesNumber;
}
Rectangle::Rectangle(){
  l=0;
  m=0;
}
Rectangle::Rectangle(const string& n, double nx, double ny, double le, double me):RegularPolygon(n,nx,ny,4){
  l=le;
  m=me;
}
Rectangle::Rectangle(const Rectangle&a){
l=a.l;
m=a.m;
}
void Rectangle::setL(double le){
  l=le;
}
double Rectangle::getL(){
return l;
}
void Rectangle::setM(double me){
  m=me;
}
double Rectangle::getM(){
return m;
}
double Rectangle::peritmeter(){
  return 2*l+2*m;
}
double Rectangle::area(){
  return l*m;
}
Square::Square(){
  n=0;
}
Square::Square(const string& n, double nx, double ny, double ne):Rectangle(n,nx,ny,ne,ne){
  setN(ne);
}
void Square::setN(double ne){
  n=ne;
}
Square::Square(const Square &a){
n=a.n;
}
double Square::getN(){
  return n;
}
double Square::peritmeter(){
  return n*4;
}
double Square::area(){
  return n*n;
}
Circle::Circle(){
  Radius=0;
}
Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny)
{
	Radius = r;
}
Circle::Circle(const Circle &a){
  Radius=a.Radius;
}
void Circle::setRadius(double re){
  Radius=re;
}
double Circle::getRadius(){
  return Radius;
}
double Circle::peritmeter(){
  return 2*Radius*pi;
}
double Circle::area(){
  return pi*Radius*Radius;
}
