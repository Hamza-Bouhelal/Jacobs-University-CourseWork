#include <iostream>
#include "Box.h"
using namespace std;

Box::Box(){
  height=0;
  width=0;
  depth=0;
}
Box::Box(double newheight, double newwidth, double newdepth){
  height=newheight;
  width=newwidth;
  depth=newdepth;
}
Box::Box(const Box &a){
  height=a.height;
  width=a.width;
  depth=a.depth;
}
Box::~Box(){

}

void Box::setHeight(double newheight){
  height=newheight;
}
void Box::setWidth(double newwidth){
  width=newwidth;
}
void Box::setDepth(double newdepth){
  depth=newdepth;
}

double Box::getHeight(){
  return height;
}
double Box::getWidth(){
  return width;
}
double Box::getDepth(){
  return depth;
}
