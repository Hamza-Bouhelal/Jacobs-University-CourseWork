
#include <iostream>
#include <cstdlib>
#include <string>
#include "City.h"

using namespace std;
int main() {
City Bremen;
City Paris;
City London;

string names0="Bremen";
string names1="Paris";
string names2="London";

Bremen.setName(names0);
Paris.setName(names1);
London.setName(names2);

Bremen.setNumh(547976);
Paris.setNumh(2187526);
London.setNumh(8908081);


string mayor0="Andreas Bovenschulte";
string mayor1="Anne Hidalgo";
string mayor2="Sadiq Khan";

Bremen.setMayor(mayor0);
Paris.setMayor(mayor1);
London.setMayor(mayor2);

Bremen.setArea(326.7);
Paris.setArea(105.4);
London.setArea(1572);

cout<<"City's Name: "<< Bremen.getName()<<endl;
cout<<"City's Number of inhabitants: : "<< Bremen.getNumh()<<endl;
cout<<"City's Mayor: "<< Bremen.getMayor()<<endl;
cout<<"City's Area: "<< Bremen.getArea()<<endl<<endl;

cout<<"City's Name: "<< Paris.getName()<<endl;
cout<<"City's Number of inhabitants: : "<< Paris.getNumh()<<endl;
cout<<"City's Mayor: "<< Paris.getMayor()<<endl;
cout<<"City's Area: "<< Paris.getArea()<<endl<<endl;

cout<<"City's Name: "<< London.getName()<<endl;
cout<<"City's Number of inhabitants: : "<< London.getNumh()<<endl;
cout<<"City's Mayor: "<< London.getMayor()<<endl;
cout<<"City's Area: "<< London.getArea()<<endl<<endl;

return 0;
}
