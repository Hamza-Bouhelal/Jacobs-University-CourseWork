#include <stdio.h>
/*
CH-230-A
a6 p7.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
void set3bits(unsigned char i ,int x,int y, int z){
    int idx=0;
    int mask= 128;//10000000
    while(idx<8){
      if(idx==7-x || idx == 7-y || idx == 7-z)
      printf("1");
    else{
        if((i & mask)==0)
            printf("0");
        else
            printf("1");}
        //shifting
        mask=mask>>1;
        idx++;
    }

}
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
    int x,y,z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    printf("After setting the bits: ");
    set3bits(i, x, y, z);
    printf("\n");
    return 0;
}



