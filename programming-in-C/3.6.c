#include <stdio.h>
/*
CH-230-A
a3 p6.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
float to_pounds(int kg, int g)
{
    float sum= kg*2.2 +g*0.001*2.2;
    return sum;
}
int main() {
int kg , g;
scanf("%d",&kg);
scanf("%d",&g);
printf("Result of conversion: %f",to_pounds(kg,g));
printf("\n");
return 0;
}


