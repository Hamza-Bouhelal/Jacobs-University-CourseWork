#include <stdio.h>
/*
CH-230-A
a3 p2.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
int main() {
char ch;
scanf("%c", &ch);
getchar();
int n;
scanf("%d", &n);
//starting from 0 to n
for(int i = 0; i<=n; i++)
{
    printf("%c\n", ch-i);
}

return 0;
}
