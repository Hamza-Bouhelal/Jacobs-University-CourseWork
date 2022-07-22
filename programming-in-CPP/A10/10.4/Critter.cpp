
#include <iostream>
#include "Critter.h"
#include <string>

using namespace std;

Critter::Critter():name("default_critter"){
  hunger=0;
  boredom=0;
  height=5;
  cout<<"Constructor 1 used"<<endl;
}

Critter::Critter(string newName) : name(newName){
    hunger=0;
    boredom=0;
    height=5;
    cout<<"Constructor 2 used"<<endl;
}

Critter::Critter(string newName,int newHunger,int newBoredom,double newHeight) : name(newName){
    hunger=newHunger;
    boredom=newBoredom;
    height=newHeight;
    cout<<"Constructor 3 used"<<endl;

}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::print() {
	cout <<endl<< "I am " << name << ". My hunger level is " << hunger << "," ;
  cout << "my boredom level is: " << boredom << ",my height is " << height << "." << endl<<endl;
}

