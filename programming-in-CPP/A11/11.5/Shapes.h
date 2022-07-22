/*
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
#define pi 3.14159265359

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);
    void setName(const std::string&);
    std::string& getName();
		void printName() const ;  	// prints the name
};

class CenteredShape : public Shape {  // inherits from Shape
	private:
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
    void setX(double);
    double getX();
    void setY(double);
    double getY();
		void move(double, double);	// moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private:
		int EdgesNumber;

	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
    void setEn(int);
    int getEn();
};
class Rectangle : public RegularPolygon {
  private:
  double l;
  double m;

  public:
  Rectangle();
  Rectangle(const std::string& n, double nx, double ny, double le, double me);
  Rectangle(const Rectangle& obj);
  void setL(double le);
  double getL();
  void setM(double me);
  double getM();
  double peritmeter();
  double area();
};
class Square : public Rectangle {
  private:
  double n;

  public:
  Square();
  Square(const std::string & n, double nx, double ny, double ne);
  Square(const Square& obj);
  void setN(double);
  double getN();
  double peritmeter();
  double area();
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;

	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
    void setRadius(double r);
    double getRadius();
    double peritmeter();
    double area();
};

#endif
