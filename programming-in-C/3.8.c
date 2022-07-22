#include <stdio.h>
/*
CH-230-A
a3 p8.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
float sum(float arr[],  int j){
int i;
float s=0;
for(i=0; i<j; i++)
{
   s=s+arr[i];
}
return s;
}

float average (float arr[],  int j)
{
  int i;
float s=0;
float av;
for(i=0; i<j; i++)
{
   s=s+arr[i];
}
av = s/j;
return av;
}

int main() {
float arr[10];
//we must use if inside of for to stop
//the loop in the case wanted
for(int i=0; i<10; i++)
{
scanf("%f", &arr[i]);
//the loop only occurs in the end
//of the line or if we type -99
if (arr[i]== -99 || arr[i]== '\0')
    {
        printf("The sum of the values= %f\n", sum(arr, i));
        printf("The average of the values= %f\n", average(arr, i));
        break;
    }
}

return 0;
}
