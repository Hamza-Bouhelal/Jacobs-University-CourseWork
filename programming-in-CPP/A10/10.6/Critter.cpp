#include <iostream>
#include "Critter.h"
#include <string>

using namespace std;
Critter::Critter():name("default_critter"){
  hunger=0;
  boredom=0;
  height=5;
  thirst=0;
  cout<<"Constructor 1 used"<<endl;
}

Critter::Critter(string newName) : name(newName){
    hunger=0;
    boredom=0;
    height=5;
    thirst=0;
    cout<<"Constructor 2 used"<<endl;
}

Critter::Critter(string newName,int newHunger,int newBoredom,double newHeight) : name(newName){
    hunger=idHunger(newHunger);
    boredom=newBoredom;
    height=newHeight;
    thirst=newHunger;
    cout<<"Constructor 3 used"<<endl;
}

Critter::Critter(string newName,int newHunger,int newBoredom,double newHeight, double newThirst):name(newName){
  hunger=idHunger(newHunger);
  boredom=newBoredom;
  height=newHeight;
  thirst=newThirst;
}

void Critter::setHunger(int newhunger) {
	hunger = idHunger(newhunger);
    }
void Critter::setThirst(double newThirst){
    thirst = newThirst;
}

int Critter::getHunger() {
	return idHunger();
    }
double Critter::getThirst(){
    return thirst;
}

void Critter::print() {
	cout <<endl<< "I am " << name <<"."<<endl<< "My hunger level is " << getHunger() <<"."<<endl ;
  cout << "My boredom level is: " << boredom<<"."<<endl << "My height is " << height << ".";
  cout<<endl<<"My thirst level is : "<< thirst<<"."<< endl<<endl;
}

double Critter::idHunger(int hunger){
    return(double)hunger/10;
}

int Critter::idHunger(){
    return (int)(hunger*10);
}


