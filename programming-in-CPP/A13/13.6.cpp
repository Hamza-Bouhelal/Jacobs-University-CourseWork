#include <iostream>
#include <vector>
/*
CH-230-A
a13 p6.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
using namespace std;
int main() {
vector<int> vector0(20, 8);
for (int x : vector0){
    cout<<x<<" ";
}
try {
    cout<<vector0.at(20);
} catch (out_of_range& a) {
    cerr<< a.what()<<endl;
}
return 0;
}
