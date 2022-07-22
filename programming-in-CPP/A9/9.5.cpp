#include <iostream>
#include <cstdlib>
#include <ctime>
/*
CH-230-A
a9 p5.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/

using namespace std;
int main(int argc, const char * argv[])
{
string name;
cout<<"Enter your name: ";
getline(cin, name);
int die ;
int randomNumber ;
// init random number generator
srand ( static_cast < unsigned int >( time (0) ) );
randomNumber = rand () ;
die = ( randomNumber % 100) + 1;
int i=-1;
while(i!=die){
    cout<<"guess a number: ";
    cin>>i;
   if(i<die)
    cout<<"Guessed number smaller."<<endl;
   else if(i>die)
    cout<<"Guessed number bigger."<<endl;
}
cout<<"You got it !"<<endl;
return 0;
}


