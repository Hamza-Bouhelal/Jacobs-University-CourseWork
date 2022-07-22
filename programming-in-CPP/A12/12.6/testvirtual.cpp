#include <iostream>
/*
CH-230-A
a12 p6.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include"Square.h"
 /*
            Area
        /          \
    circle         Rectangle
      |               |
     ring           Square
  */
const int num_obj = 7;
int main() {
	Area *list[num_obj];
  // (1)array of pointers of area with size 6
  int index = 0;
  // (2)giving index the value 0
	double sum_area = 0.0;
  double sum_perimeter=0.0;
  double perimeter;
  // (3)giving sum_area the value 0.0
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);
  // (4)creation blue_ring of type Ring
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
  cout << "Creating Square: ";
  Square black_square("BLACK", 3);
	list[0] = &blue_ring;
  // (5)initializing list[0] to &blue_ring
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
  list[6]=&black_square;
	while (index < num_obj) {
    // (7)while loop that ends when index=6
    //(going over all the elemnts of list[])
		(list[index])->getColor();
		double area = list[index]->calcArea();
    // (8)every time we enter the while loop
    //area equals the area of list[index]
		sum_area += area;
    perimeter = list[index]->calcPerimeter();
    sum_perimeter+=perimeter;
    index++;
	}
	cout <<endl<<endl<< "The total area is "
			<< sum_area << " units " << endl;
      // (9)printing the sum of the areas of the instance list[]
      cout << "\nThe total Perimeter is "
			<< sum_perimeter << " units " << endl;
	return 0;
}
