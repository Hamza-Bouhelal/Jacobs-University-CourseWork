#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <algorithm>

void insertion_sort(std::vector<int> &arr, int p, int r){
int key, i;
for(int j=1+p;j<r+1;j++){
    key = arr[j];
    i = j-1;
    while(i>p-1 && arr[i]>key){
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=key;
}
}

void Merge(std::vector<int> &arr, int p, int q, int r){
std::vector<int> A1, A2;
for(int i=p;i<q+1;i++){
    A1.push_back(arr[i]);
}
for(int j = q+1;j<r+1;j++){
    A2.push_back(arr[j]);
}
A1.push_back(100000);
A2.push_back(100000);
int i=0;
int j=0;
for(int k=p;k<r+1;k++){
    if(A1[i]<A2[j]){
        arr[k]=A1[i];
        i++;
    }
    else{
        arr[k]=A2[j];
        j++;
    }
}
}
void merge_sort(std::vector<int> &arr, int p, int r, int k){
if(k<r-p+1){
  int q = (p+r-1)/2;
    merge_sort(arr, p, q, k);
    merge_sort(arr, q+1, r, k);
    Merge(arr, p, q, r);

}
else{
    insertion_sort(arr, p, r);
}
}


std::vector<int> best_case(int n) {
    std::vector<int> bestcase;
    for(int i=0;i<n;i++)
        bestcase.push_back(rand() % 100);
    std::sort(bestcase.begin(), bestcase.end());
    return bestcase;
}

std::vector<int> averageCase(int n) {
    std::vector<int> average;
    for (int i=0;i<n;i++)
        average.push_back(rand() % 100);
    return average;
}

std::vector<int> worstCase(int n) {
    std::vector<int> worst;
    for (int i = 0; i < n; i++)
        worst.push_back(rand() % 100);
    std::sort(worst.begin(), worst.end(), std::greater<int>());
    return worst;
}
int main(){
float s;
std::vector<int> vec;
int n= 10; //number of element in the vector
int k; //where to stop spliting
int j = 10;
for(k=1;k<10;k++){
        std::cout<<"for k = "<<k<<std::endl;
std::cout<<"best cases: "<<std::endl;
for(int i=0;i<j;i++){
    vec=best_case(n);
    float begtime = clock();
    merge_sort(vec, 0, n-1, k);
    float time = (clock()-begtime)/CLOCKS_PER_SEC;
    s = s +time;
}
std::cout<<"Average time for best case: "<<s/j<<std::endl<<std::endl;

std::cout<<"Average cases: "<<std::endl;
for(int i=0;i<j;i++){
    vec=averageCase(n);
    float begtime = clock();
    merge_sort(vec, 0, n-1, k);
    float time = (clock()-begtime)/CLOCKS_PER_SEC;
    s = s +time;
}
std::cout<<"Average time for average case: "<<s/j<<std::endl<<std::endl;


std::cout<<"worst cases: "<<std::endl;
for(int i=0;i<j;i++){
    vec=worstCase(n);
    float begtime = clock();
    merge_sort(vec, 0, n-1, k);
    float time = (clock()-begtime)/CLOCKS_PER_SEC;
    s = s +time;
}
std::cout<<"Average time for worst case: "<<s/j<<std::endl<<std::endl;
std::cout<<"----------------------------------------------------------"<<std::endl<<std::endl;
}
return 0;
}
