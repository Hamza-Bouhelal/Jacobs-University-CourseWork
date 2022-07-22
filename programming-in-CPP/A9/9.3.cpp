#include <iostream>
/*
CH-230-A
a9 p3.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/

float abs(float &b){
if(b<0)
    return -b;
else
    return b;
}
int main(int argc, const char * argv[])
{
    float b;
    std::cin >> b;
    std::cout <<"The absolute value of "<< b << " is : "<< abs(b)<<std::endl;
    return 0;
}
