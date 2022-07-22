#include <iostream>
/*
CH-230-A
a9 p4.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
using namespace std;
int mycount(int x, int y){
return y-x;
}
int mycount(string s, char c){
int i=0;
int idx=0;
while(s[i]!='\0'){
    if(s[i]==c)
        idx++;
    i++;
}
return idx;
}

int main(int argc, const char * argv[])
{
    int x,y;
    cout<< "enter two integers: "<<endl;
    cin>>x;
    cin>>y;
    cout<< "The difference of " << y <<" and "<< x <<" is: "<<mycount(x,y)<<endl;
    cout<<"enter a string: ";
    string str, strbuffer;
    getline(cin, strbuffer);
    getline(cin, str);
    char c;
    cout<<"enter a char : ";
    cin>> c;
    cout<< c <<" occurs " << mycount(str,c) << " times in the string."<< endl;
    return 0;
}

