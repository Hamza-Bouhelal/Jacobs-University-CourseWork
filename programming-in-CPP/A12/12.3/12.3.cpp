#include <iostream>
#include "TournamentMember.h"
/*
CH-230-A
a12 p3.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
using namespace std;
int main() {
  char str[]="Hamburg";
  Player::setLocation(str);
  char str1[]="amine";
  char str2[]="dvt";
  char str3[]="24-08-1993";
  char str4[]="omar";
  char str5[]="sat";
  char str6[]="04-11-1997";

  Player a;
  a.print();
  a.printp();

  Player b(str1, str2, str3, 192,8769,9,10,26,'r');
  b.print();
  b.printp();

  Player c(str4, str5, str6, 171,7797,7,3,14,'l');
  c.print();
  c.printp();
  return 0;
}
