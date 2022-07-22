#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int age;
	int hunger;
	int nsib;//number of siblings
	//int boredom;
	//double height;


public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setAge(int newage);
	void setHunger(int newhunger);
	void setNsib(int newnsib);
	//void setBoredom(int newboredom);
	// getter method
	std::string& getName();
	int getAge();
	int getHunger();
	int getNsib();
	// service method
};
