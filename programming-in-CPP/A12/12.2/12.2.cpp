#include <iostream>
#include "TournamentMember.h"
/*
CH-230-A
a12 p2.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
using namespace std;
int main() {
  TournamentMember player0;
  player0.print();

  char str1[]="amine";
  char str2[]="dvt";
  char str3[]="24-08-1993";
  char str4[]="Bremen";

  TournamentMember player1(str1,str2,str3,182,8759);
  player1.setLocation(str4);
  player1.print();

  TournamentMember player2(player1);
  player2.print();

  return 0;
}
