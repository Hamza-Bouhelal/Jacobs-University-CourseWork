#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
CH-230-A
a7 p5.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
int my_compare ( const void * va , const void * vb ) {
const int* a = ( const int *) va ;
const int* b = ( const int *) vb ;
if (* a < * b ) return -1;
else if (* a > * b ) return 1;
else return 0;
}
int my_compare_2 ( const void * va , const void * vb ) {
const int* a = ( const int *) va ;
const int* b = ( const int *) vb ;
if (* a < * b ) return 1;
else if (* a > * b ) return -1;
else return 0;
}


int main()
{
int n;
scanf("%d", &n);
int arr[n];
for(int i=0;i<n;i++){
scanf("%d", &arr[i]);}
int (*foo)(const void* , const void*);
foo=&my_compare;
int (*foo_2)(const void* , const void*);
foo_2=&my_compare_2;
char c;
while(1){
scanf("%c", &c);
if(c=='a'){
     qsort(arr,n,sizeof(arr[0]),(*foo));
     for(int i=0;i<n;i++)
     printf("%d ", arr[i]);
     printf("\n");}

else if(c=='d'){
     qsort(arr,n,sizeof(int),(*foo_2));
     for(int i=0;i<n;i++)
     printf("%d ", arr[i]);
     printf("\n");}

else if(c=='e')
        return 0;

}}



