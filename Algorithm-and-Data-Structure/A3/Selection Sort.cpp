#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Selection_Sort(int arr[], int n){
int s, idx;
int mark, temp;
for(int i=0;i<n-1;i++){
    idx = 0;
    s=INT_MAX;
   for(int j=i;j<n;j++){
        if(arr[j]<s){
            s=arr[j];
            mark = j;
            idx = 1;}
        }
        if(idx==1){
        temp = arr[i];
        arr[i]= s;
        arr[mark]=temp;}
}
}
void Case_A(int arr[], int n){
srand(time(nullptr));
int temp;
temp =  rand() % 20 + 1;
arr[0]=temp;
for(int i=1;i<n;i++){
    temp =  rand() % 20 + 1;
    if(i % 2 ==0){
        while(temp<arr[i-1] || temp == arr[i-1])
            temp =  rand() % 20 + 1;
    }
    else{
        while(temp>arr[i-1] || temp == arr[i-1])
            temp =  rand() % 20 + 1;
    }
     arr[i]= temp;
}
}
void Case_B(int arr[], int n){
srand(time(nullptr));
int temp;
temp =  rand() % 20 + 1;
arr[0]=temp;
int ext = 20;
for(int i=1;i<n;i++){
    if(arr[i-1]== ext)
        ext = ext + 10;
    temp =  rand() % ext  + 1;
    while(!(temp>arr[i-1]))
            temp =  rand() % ext + 1;
    arr[i]=temp;
}
}
int main(){
int *arr;
Case_A(arr, 7);
//Case_B(arr, 7);
cout<<"The array not sorted: ";
for(int i=0;i<7;i++)
    cout<<arr[i]<<" ";
cout<<endl;
Selection_Sort(arr, 7);
cout<<"The sorted array: ";
for(int i=0;i<7;i++)
    cout<<arr[i]<<" ";
cout<<endl;
return 0;
}

