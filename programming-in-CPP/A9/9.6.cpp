#include <iostream>
/*
CH-230-A
a9 p6.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
using namespace std;
int myfirst(int arr[],int n){
for(int i=0;i<n;i++){
    if(arr[i] % 2==0 && arr[i]>0){
        return arr[i];}
}
return -1;
}
float myfirst(float arr[], int n){
for(int i=0;i<n;i++){
    if(arr[i]==(int)arr[i] && arr[i]<0)
        return arr[i];
}
return -1.1;
}
char myfirst(char arr[], int n){
    for(int i=0;i<n;i++){
        if((arr[i]<='z' && arr[i]>='a')||(arr[i]<='Z' && arr[i]>='A')){
            if(arr[i]!= 'a' && arr[i]!= 'e' &&arr[i]!= 'i' &&arr[i]!= 'o' && arr[i]!= 'u'
            && arr[i]!= 'A' && arr[i]!= 'E' &&arr[i]!= 'I' &&arr[i]!= 'O' && arr[i]!= 'U'){
                return arr[i];
            }
        }
    }
    char c='0';
    return c;
}
int main(int argc, const char * argv[])
{
    int arr1[11]={0,1,1,-2,3,5,8,13,21,20,35};
    int arr2[11]={0,1,1,-2,3,5,81,13,21,-20,35};
    float arr3[11]={0.25,1.0,1.0,-2.48,3.0,5,8.0,-13.0,21.69,20.1,-35};
    float arr4[11]={0.25,1.0,1.0,-2.48,3.0,5,8.0,-13.01,21.69,20.1,35};
    char arr5[14]="eahello world";
    char arr6[14]="eaeo o";
    cout<<"functions with array of integers: "<< myfirst(arr1, 11)<<endl;
    cout<<"functions with array of integers: "<< myfirst(arr2, 11)<<endl;
    cout<<"functions with array of doubles: "<< myfirst(arr3, 11)<<endl;
    cout<<"functions with array of doubles: "<< myfirst(arr4, 11)<<endl;
    cout<<"functions with array of chars: "<< myfirst(arr5, 14)<<endl;
    cout<<"functions with array of chars: "<< myfirst(arr6, 6)<<endl;
    return 0;
}

