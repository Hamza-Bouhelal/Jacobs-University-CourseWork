#include <stdio.h>
#include <stdlib.h>
/*
CH-230-A
a5 p4.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/

void divby5(float arr[], int size){
//dividing all the elements by 5
for(int i=0; i<size; i++)
{arr[i]=arr[i]/5;}
}

int main()
{   int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    float *arr=malloc(n*sizeof(float));
    for(int j=0; j<n;j++)
        scanf("%f", &arr[j]);
    //printing element by element
    printf("Before:\n");
    for(int i=0; i<n; i++){
    //printing 3 digits after the .
    printf("%.3f ", arr[i]);}
    printf("\n");
    //dividing all the elements by 5
    divby5(arr, 6);
    printf("After:\n");
    //printing element by element
    for(int i=0; i<n; i++){
    printf("%.3f ", arr[i]);}
    printf("\n");
    free(arr);
    return 0;
}
