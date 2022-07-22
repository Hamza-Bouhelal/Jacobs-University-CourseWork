#include <iostream>
#include "Creature.h"
using namespace std;
//creature constructor:
Creature::Creature(): distance(10){
cout<<"Creature spawned"<<endl;
}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}
//creature destructor:
Creature::~Creature(){
    cout<<"Destructing the creature"<<endl;
}

//wizard constructor:
Wizard::Wizard() : distFactor(3){
cout<<"Wizard spawned"<<endl;
}
//wizard destructor:
Wizard::~Wizard(){
    cout<<"Destructing the Wizard"<<endl;
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//monster constructor:
Monster::Monster(): distFactor(2){
cout<<"Monster spawned"<<endl;
}
//monster destructor:
Monster::~ Monster(){
cout<<"Destructing the Monster"<<endl;
}
void Monster::climb() const
{
    cout << "climbing " << (distFactor * distance) << " meters!\n";
}

//Lizards constructor:
Lizards::Lizards(): distFactor(0.5){
cout<<"Lizard spawned"<<endl;
}
//Lizards destructor:
Lizards::~Lizards(){
cout<<"Destructing the lizard"<<endl;
}
void Lizards::crawl() const
{
    cout << "crawling " << (distFactor * distance) << " meters!\n";
}
