#include <iostream>
using namespace std;
/*
CH-230-A
a13 p7.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
class OwnException : public exception{
private:
    string str;
public:
string what(){
return "OwnException\n";
}
OwnException(string newstr){
    newstr = str;
}
};

void switcher(int a){
switch(a){
  case(1):
    throw('a');
  case(2):
    throw(12);
  case(3):
    throw(true);
  default:
    throw OwnException("Default case exception");
  }
}

int main() {
int i=0;
while(i<4){
    try{switcher(i);}
    catch(char& a){cerr<<"Caught in main "<<a<<endl;}
    catch(int& a){cerr<<"caught in main "<<a<<endl;}
    catch(bool& a){cerr<<"caught in main "<<(a? "true" : "false")<<endl;}
    catch(OwnException& a){cerr<<"caught in main "<<a.what()<<endl;}
    i++;
}
return 0;
}
