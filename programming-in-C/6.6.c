#include <stdio.h>
/*
CH-230-A
a6 p6.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/

int main()
{   unsigned char i;
    scanf("%c", &i);
    getchar();
    printf("The decimal representation is: %d\n", i);
    printf("The binary representation is: ");
    int idx=0;
    int mask= 128;//10000000
    while(idx<8){
    //using the bitwise operator &
    //i & mask is the equivalent to i & 10000000 then 01000000....
        if((i & mask)==0)
            printf("0");
        else
            printf("1");
        //shifting
        mask=mask>>1;
        idx++;
    }
    printf("\n");
    return 0;
}


