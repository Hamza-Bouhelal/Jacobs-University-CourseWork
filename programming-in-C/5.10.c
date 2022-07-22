
#include <stdio.h>
/*
CH-230-A
a5 p10.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
void print(int n){
if(n==0){}
else{
    printf("%d ", n);
    print(n-1);
}
}
int main()
{
int n;
scanf("%i", &n);
print(n);

return 0;
}

