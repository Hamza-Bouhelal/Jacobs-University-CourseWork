#include <iostream>
#include "City.h"

using namespace std;
//setters
   void City::setName (std::string& newname){
     name=newname;
   }
   void City::setNumh(int newnumh){
     numh=newnumh;
   }
   void City::setMayor(std::string& newmayor){
     mayor=newmayor;
   }
   void City::setArea(double newarea){
     area=newarea;
   }
   //getters
   string& City::getName(){
     return name;
   }
   int City::getNumh(){
     return numh;
   }
   string& City::getMayor(){
     return mayor;
   }
   double City::getArea(){
     return area;
   }
