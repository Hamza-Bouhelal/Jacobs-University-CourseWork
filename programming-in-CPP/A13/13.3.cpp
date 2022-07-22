#include <iostream>
#include <ostream>
#include <string>
#include <fstream>
/*
CH-230-A
a13 p3.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
using namespace std;
int main() {
int n;
cin>>n;
string name;
string str;
ifstream* files = new ifstream[n];
for (int i =0; i < n; i++){
    cout<<"enter file name ";
    cin>>name;
    files[i].open(name, ios::binary);
    if (!files[i].good()){
        cout<<"error getting file: "<<name<<endl;
        exit(1);
    }
}
ofstream out("concatn.txt", ios::binary);
for (int i = 0; i < n; i++){
    while (getline(files[i], str)){
        out<<str<<endl;
    }
    out<<endl;
}
delete [] files;
return 0;
}
