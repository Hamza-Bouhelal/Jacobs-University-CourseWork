#include <stdio.h>
/*
CH-230-A
a3 p3.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
float convert(int cm)
{
    float con;
    con = 0.00001 * cm ;
    return con;
}
int main() {
int cm ;
scanf("%d", &cm);
float con = convert(cm);
printf("Result of conversion: %f", con);
printf("\n");
return 0;
}

