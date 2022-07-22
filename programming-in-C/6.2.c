#include <stdio.h>
/*
CH-230-A
a6 p2.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
//using the bitwise operators & to compare a and 1
#define lsb(a)(((a)& 1) ? 1 : 0)

int main()
{   unsigned char i;
    scanf("%c", &i);
    getchar();
    printf("The decimal representation is: %d\n", i);
    printf("The least significant bit is: %d", lsb((int) i));
    return 0;
}

