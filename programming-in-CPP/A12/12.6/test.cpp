#include <iostream>
#include <ctime>
using namespace std;
int main() {
    int die ;
int randomNumber ;
int i;
while(i<30){
    srand ( static_cast < unsigned int >( time (0) ) );
    randomNumber = rand () ;
    die = ( randomNumber % 10) + 1;
    cout<<die<<endl;
    i++;
}
return 0;
}

