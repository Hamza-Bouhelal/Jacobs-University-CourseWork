#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
/*
CH-230-A
a9 p9.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
using namespace std;

int main(){
string *wlist=new string[17];
//words randomly generated from https://www.randomlists.com/
wlist[0]="computer";
wlist[1]="television";
wlist[2]="keyboard";
wlist[3]="laptop";
wlist[4]="mouse";
wlist[5]="toothbrush";
wlist[6]="toe";
wlist[7]="multiply";
wlist[8]="station";
wlist[9]="chickens";
wlist[10]="dislike";
wlist[11]="grotesque";
wlist[12]="preach";
wlist[13]="wish";
wlist[14]="statement";
wlist[15]="kettle";
wlist[16]="sense";
int die ;
int randomNumber ;
int c=1;
string guess;
while(1){
    // init random number generator
    srand ( static_cast < unsigned int >( time (0) ) );
    randomNumber = rand () ;
    die = ( randomNumber % 16) + 1;
    string randomword=wlist[die];
    cout<<"Try to guess what word this is: ";
    for (int i = 0; randomword[i] != '\0'; i++){
    if(randomword[i]=='a' ||randomword[i]=='e' ||randomword[i]=='i' ||randomword[i]=='o' ||randomword[i]=='u')
        cout<<"_";
    else if(randomword[i]=='A' ||randomword[i]=='E' ||randomword[i]=='I' ||randomword[i]=='O' ||randomword[i]=='U')
        cout<<"_";
    else
        cout<<randomword[i];
            }
    cout<<endl;
    while(1){
        cout<<"Your word guess: ";
        getline(cin, guess);
        if(guess=="quit")
            exit (1);
        if(guess==randomword){
            if(c==1)
            cout<<"You got it in "<< c << " try!"<<endl<<"Want to plat again? if not enter 'quit'"<<endl;
            else
            cout<<"You got it in "<< c << " tries!"<<endl<<"Want to plat again? if not enter 'quit'"<<endl;
            break;}
        else
            cout<<"That's not the word"<<endl;
        c++;
    }
    }
return 0;
}


