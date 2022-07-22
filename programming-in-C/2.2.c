#include <stdio.h>
/*
CH-230-A
a2 p2.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
int main()
{
char a;
scanf("%c", &a);
getchar();
printf("character=%c\n", a);
printf("decimal=%d\n", a);
printf("octal=%02o\n", a);
//we use 02o to convert from char to octal
printf("hexadecimal=%02x\n", a);
//we use 02X to convert from char to hexadecimal
return 0;
}
