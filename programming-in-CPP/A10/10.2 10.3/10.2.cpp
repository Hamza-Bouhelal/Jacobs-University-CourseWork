#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;
	string name;
	int age;
    int hunger;
	int nsib;

	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	c.setName(name);
	cout<<"Age: ";
	cin>>age;
	c.setAge(age);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);
    cout<<"Number of siblings: ";
	cin>>nsib;
	c.setNsib(nsib);


	cout << "You have created:" << endl;
	cout << "I am " << c.getName() << ". My hunger level is " << c.getHunger() << "." << endl;
	cout << "I am " << c.getAge() << " years old, I have " ;
	if(c.getNsib()>1)
        cout<<c.getNsib() << " Siblings." << endl;
    else
        cout<<c.getNsib() << " Sibling." << endl;
        return 0;
}

