/*
	CH-231-A
	hw1_p3.cpp
	Hamza Bouhelal
	h.bouhelal@jacobs-university.de
*/
#include <iostream>
#include "LinkedList.h"
using namespace std;
int main(){
DLList<int> my_list;
my_list.move_front(5);
my_list.move_front(6);
my_list.move_front(8);
my_list.move_front(15);
my_list.move_end(14);
my_list.move_end(6);
cout<<"The number of elements in the list: "<<my_list.n_of_element()<<endl;
cout<<"The first element of the list: "<<my_list.first_Data()<<endl;
cout<<"The last element of the list: "<<my_list.Last_Data()<<endl;
cout<<"popping: "<<my_list.pop()<<endl;
cout<<"popping: "<<my_list.pop_end()<<endl;
cout<<"The number of elements in the list after popping: "<<my_list.n_of_element()<<endl;
cout<<"The first element of the list now: "<<my_list.first_Data()<<endl;
cout<<"The last element of the list now: "<<my_list.Last_Data()<<endl;
return 0;
}
