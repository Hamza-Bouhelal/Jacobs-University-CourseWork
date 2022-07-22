#include <iostream>
/*
CH-230-A
a11 p2.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
using namespace std;

class Creature {
	public:
		Creature();
    ~Creature();
		void run() const;

	protected:
		int distance;
};
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

class Wizard : public Creature {
	public:
		Wizard();
    ~Wizard();
		void hover() const;

	private:
		int distFactor;
};
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
class Monster: public Creature{
  public:
  Monster();
  ~ Monster();
  void climb() const;

  private:
  int distFactor;
};
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
class Lizards: public Creature{
  public:
  Lizards();
  ~Lizards();
  void crawl() const;

  private:
  double distFactor;
};
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



int main()
{
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout<<endl<<"Creating a Monster."<<endl;
    Monster m;
    m.run();
    m.climb();

    cout<<endl<<"Creating a Lizard."<<endl;
    Lizards l;
    l.run();
    l.crawl();
    cout<<endl;




    return 0;
}
