#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
CH-230-A
a4 p8.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
void printM(int n, int m[n][n])
{
printf("The entered matrix is:\n");
for(int i=0;i<n;i++){
 for(int j=0;j<n;j++)
    {printf("%d ",m[i][j]);}
 printf("\n");}
}

void under_sd(int n,int m[n][n])
{
printf("Under the secondary diagonal:\n");
for (int i=1;i<n;i++){
 for (int j=n-i;j<n;j++){
    printf("%d ",m[i][j]);
}
}
}

int main(){
int n,i,j;
scanf("%d",&n);
int m[n][n];

//reading the values of the matrix
for(i=0;i<n;i++)
 for(j=0;j<n;j++)
    {scanf("%d",&m[i][j]);}

printM(n,m);
//printing the values of the matrix

under_sd(n,m);
 //printing the values under the secondary diagonal of the matrix
printf("\n");
return 0;
}

