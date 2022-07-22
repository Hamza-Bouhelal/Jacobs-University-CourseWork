#include <stdio.h>
#include <stdlib.h>
/*
CH-230-A
a5 p6.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/


int main()
{
int n;
scanf("%d", &n);
//allocating memory
float *arr=malloc(n*sizeof(float));
float* p=arr;
//reading the elements of the array
for(int i=0;i<n;i++){
scanf("%f", &arr[i]);
}
int i=0;
while(i<n){
//checking element by element using pointers
 if(*(p+i) <0){
  printf("Before the first negative value: %d elements", i);
  break;}
 i++;
}
free(arr);
return 0;
}

