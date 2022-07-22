
#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	double hunger;
	int boredom;
	double height;
  double thirst;

  double idHunger(int hunger);
  int idHunger();

public: // business logic methods are public
	// setter methods
  Critter();
  Critter(std::string name);
Critter(std::string name,int hunger,int boredom,double height=10);
Critter(std::string name,int hunger,int boredom,double height, double thirst);
	void setHunger(int newhunger);
  void setThirst(double newthirst);
  //getter methods
  int getHunger();
  double getThirst();
	// service method
	void print();
};
