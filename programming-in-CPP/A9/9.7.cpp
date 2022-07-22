#include <string>
#include <iostream>
/*
CH-230-A
a9 p7.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
using namespace std;
//swapping ints by reference
void swapping(int &a, int &b){
int temp=a;
a=b;
b=temp;
}
//swapping floats by reference
void swapping(float &a,float &b){
float temp=a;
a=b;
b=temp;
}
//swapping pointers to char by reference
void swapping(const char * &a, const char * &b){
const char * temp=a;
a=b;
b=temp;
}
int main(){
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    return 0;
}
