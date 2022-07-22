#include <stdio.h>
/*
CH-230-A
a6 p3.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
#define min_t(a,b) ((a) < (b) ? (a) : (b))
#define min(a,b,c) (min_t(min_t((a), (b)), (c)))
#define max_t(a,b) ((a) > (b) ? (a) : (b))
#define max(a,b,c) (max_t(max_t((a), (b)), (c)))
#define mid_range(a,b,c) ((float)(min(a,b,c)+max(a,b,c))/2)

int main()
{
int a,b,c;
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
float f= mid_range(a,b,c);
printf("The mid-range is: %.6f\n", f);
return 0;
}

