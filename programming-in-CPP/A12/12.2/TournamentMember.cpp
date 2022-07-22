#include <iostream>
#include <cstring>
#include "TournamentMember.h"
using namespace std;
char TournamentMember::location[36] = "nowhere";
TournamentMember::TournamentMember(char* newfname, char* newlname, char* newdateofbirth, int newheight, int newinsurancenumber){
  strcpy(fname,newfname);
  strcpy(lname,newlname);
  strcpy(dateofbirth,newdateofbirth);
  height=newheight;
  insurancenumber=newinsurancenumber;
  cout<<"Constructor with parameters called"<<endl;
}
TournamentMember::TournamentMember()
{ // empty constroctor
    strcpy(fname,"default_first_name");
    strcpy(lname,"default_last_name");
    strcpy(dateofbirth, "0000-00-00");
    height = 0;
     insurancenumber= 0;
    cout << "Empty Constructor is being called" << endl;
}



TournamentMember::~TournamentMember(){
  cout<<"Destructor called"<<endl;
}

TournamentMember::TournamentMember(const TournamentMember& a){
  strcpy(fname,a.fname);
  strcpy(lname,a.lname);
  strcpy(dateofbirth,a.dateofbirth);
  height=a.height;
  insurancenumber=a.insurancenumber;
  strcpy(location, a.location);
  cout<<"copy Constructor called"<<endl;
}

void TournamentMember::print(){
  cout<<endl<<"Name: "<< fname<<" "<< lname<<endl;
  cout<<"Date of birth: "<< dateofbirth<<endl;
  cout<<"Height: "<<height<<" cm"<<endl;
  cout<<"Insurance number: "<<insurancenumber<<endl;
  cout<<"Location: "<<location<<endl<<endl;
}
