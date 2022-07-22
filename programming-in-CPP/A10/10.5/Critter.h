#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	double hunger;
	int boredom;
	double height;

  double idHunger(int hunger);
  int idHunger();

public: // business logic methods are public
	// setter methods
  Critter();
  Critter(std::string name);
Critter(std::string name,int hunger,int boredom,double height=10);
	void setHunger(int newhunger);
  //getter methods
  int getHunger();
	// service method
	void print();
};
