#include <stdio.h>
#include <stdlib.h>
/*
CH-230-A
a4 p6.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
void two_greatest(int array[], int n){
int g1=array[0];
int g2=array[0];
for(int i=0;i<n;i++){
    if(array[i]>g1)
        {g1=array[i];}
}
for(int j=0; j<n;j++){
    if(array[j]>g2 && array[j]!=g1)
    {g2=array[j];}
}
printf("The greatest value is %d\n", g1);
printf("The second greatest value is %d\n", g2);
}

int main() {
int n;
scanf("%d", &n);
//allocating memory for an array of n integers
int *arr=malloc(n*sizeof(int));
for(int i =0;i<n;i++)
{
    scanf("%d", &arr[i]);
}
two_greatest(arr, n);
free(arr);
//memory released
return 0;
}

