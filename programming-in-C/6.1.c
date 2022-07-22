#include <stdio.h>
/*
CH-230-A
a6 p1.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
#define swap(type, a, b) \
do { \
    struct { type *a; type *b; type t; } swap; \
    swap.a  = &(a); \
    swap.b  = &(b); \
    swap.t  = *swap.a; \
    *swap.a = *swap.b; \
    *swap.b =  swap.t; \
} while (0)
int main()
{
int x,y;
scanf("%d", &x);
scanf("%d", &y);
float a,b;
scanf("%f", &a);
scanf("%f", &b);
swap(int, x,y);
swap(float, a,b);
printf("After swapping:\n");
printf("%d\n%d\n%.6f\n%.6f\n", x, y, a, b);
    return 0;
}

