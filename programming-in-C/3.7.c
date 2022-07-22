#include <stdio.h>
/*
CH-230-A
a3 p7.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
void print_form(int n, int m, char c)
{
   int i, j;
   for(j=0; j<n; j++)
   {
   for(i=0; i<m+j; i++)
   {printf("%c", c);}
   printf("\n");
   }
}
int main() {
int n, m;
char c;
scanf("%d", &n);
scanf("%d", &m);
getchar();
scanf("%c", &c);
print_form(n, m, c);
return 0;
}


