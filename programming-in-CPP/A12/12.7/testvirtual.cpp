#include <iostream>
#include <ctime>

/*
CH-230-A
a12 p7.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include"Square.h"

int main(){
srand ( static_cast < unsigned int >( time (0) ) );
int i=0;
int rand_shape;
int rand_color;
const char* color[4]={"RED", "BLACK", "VIOLET", "BLUE"};
Area *list[25];

while(i<25){
  rand_color=rand()%4;
  rand_shape=rand()%4;
  double die1=rand()%95+5;
  double die2=rand()%95+5;
  if(rand_shape==0){
    list[i]=new Circle(color[rand_color], die1);
  }
  else if(rand_shape==1){
    if(die1<die2){
      double temp=die1;
      die1=die2;
      die2=die1;
    }
    list[i]=new Ring(color[rand_color],die1,die2);
  }
  else if(rand_shape==2){
    list[i]=new Rectangle(color[rand_color],die1,die2);
  }
  else if(rand_shape==3){
    list[i]=new Square(color[rand_color],die1);

  }
  i++;
  cout<<"shape "<<i<<": "<<endl;
  cout<<"area: "<<list[i-1]->calcArea()<<endl;
  cout<<"perimeter: "<<list[i-1]->calcPerimeter()<<endl<<endl;
}
return 0;
}
