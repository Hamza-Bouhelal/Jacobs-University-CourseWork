#include <stdio.h>
/*
CH-230-A
a6 p5.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/

int main()
{   unsigned char i;
    scanf("%c", &i);
    getchar();
    printf("The decimal representation is: %d\n", i);
    printf("The backwards binary representation is: ");
    while(i>0){
    //using the bitwise operator &
    //i & 1 is the equivalent to i & 000001
        if((i & 1)==0)
            printf("0");
        else
            printf("1");
        //shifting
        i>>=1;
    }
    printf("\n");
    return 0;
}

