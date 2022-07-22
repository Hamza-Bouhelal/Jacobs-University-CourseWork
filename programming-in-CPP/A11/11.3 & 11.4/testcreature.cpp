#include <iostream>
#include "Creature.h"
using namespace std;
/*
CH-230-A
a11 p3.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
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

