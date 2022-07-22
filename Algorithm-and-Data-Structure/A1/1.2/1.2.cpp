/*
	CH-231-A
	hw1_p2.cpp
	Hamza Bouhelal
	h.bouhelal@jacobs-university.de
*/
#include <iostream>
#include "Stack.h"
using namespace std;

int main(){
Stack<int> sta;
sta.push(4);
sta.push(8);
sta.push(5);
cout<<"The Stack: ";
sta.printStackValues();
cout<<"top of the Stack: "<<sta.Back()<<endl;
int a;
sta.pop(a);
cout<<"poping "<<a<<endl;
cout<<"top of the Stack: "<<sta.Back()<<endl;
cout<<"The Stack: ";
sta.printStackValues();
return 0;
}
