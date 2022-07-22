#include <iostream>
#include "Creature.h"
using namespace std;
/*
CH-230-A
a11 p4.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
int main()
{
    string str;
    Wizard *w;
    Monster *m;
    Lizards *l;
    cout<<"input options: 'wizard' - 'object1' - 'object2' - 'quit'."<<endl;
    while(1){
        getline(cin, str);
        if(str=="quit"){
            break;
        }
        if(str=="wizard"){
        cout << "\nCreating a Wizard.\n";
        w=new Wizard;
        w->run();
        w->hover();
        delete w;
        }
        else if(str=="object1"){
        cout<<endl<<"Creating a Monster."<<endl;
        m=new Monster;
        m->run();
        m->climb();
        delete m;
        }
        else if(str=="object2"){
        cout<<endl<<"Creating a Lizard."<<endl;
        l=new Lizards;
        l->run();
        l->crawl();
        delete l;
        }
        cout<<endl;
    }
    return 0;
}


