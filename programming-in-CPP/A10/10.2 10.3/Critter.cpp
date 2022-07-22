#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setAge(int newage){
	age = newage;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setNsib(int newnsib){
	nsib = newnsib;
}

string& Critter::getName() {
	return name;
}

int Critter::getAge() {
	return age;
}

int Critter::getHunger() {
	return hunger;
}

int Critter::getNsib() {
	return nsib;
}
