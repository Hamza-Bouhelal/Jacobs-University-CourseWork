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
Player::Player():TournamentMember(){
  number=0;
  position=0;
  numberofgoals=0;
  setLorRFooted('r');
  cout<<"empty constructor"<<endl;
}
Player::Player(char* nf, char* nl, char* ndob, int nh, int nin, int newNumber, int newPosition, int newNumberofgoals, char c):TournamentMember(nf,nl,ndob,nh,nin){
  number=newNumber;
  position=newPosition;
  numberofgoals=newNumberofgoals;
  setLorRFooted(c);
  cout<<"constructor with parameters"<<endl;
}
Player::Player(const Player& a){
  number=a.number;
  position=a.position;
  numberofgoals=a.numberofgoals;
  strcpy(lorrfooted, a.lorrfooted);
  cout<<"copy constructor"<<endl;
}
Player::~Player(){
  cout<<"Destructor"<<endl;
}
void Player::printp(){
  cout<<endl<<"Player's number: "<<number<<endl;
  cout<<"Player's position: "<<position<<endl;
  cout<<"Player's number of goals: "<<numberofgoals<<endl;
  cout<<"Player's prefered foot: "<<lorrfooted<<endl<<endl;
}
void Player::addgoals(){
numberofgoals++;
}
