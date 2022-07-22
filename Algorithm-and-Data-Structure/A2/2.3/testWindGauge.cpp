#include <iostream>
#include "WindGauge.h"
using namespace std;

int main(){
    WindGauge A(12);
    A.currentWindSpeed(15);
    A.currentWindSpeed(16);
    A.currentWindSpeed(12);
    A.currentWindSpeed(15);
    A.currentWindSpeed(15);
    A.currentwindspeedrecords();
    A.dump();
    A.currentWindSpeed(16);
    A.currentWindSpeed(17);
    A.currentWindSpeed(16);
    A.currentWindSpeed(16);
    A.currentWindSpeed(20);
    A.currentWindSpeed(17);
    A.currentWindSpeed(16);
    A.currentWindSpeed(15);
    A.currentWindSpeed(16);
    A.currentWindSpeed(20);
    A.currentwindspeedrecords();
    A.dump();
    return 0;
}
