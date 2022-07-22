#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
CH-230-A
a5 p7.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/


int main()
{
char str[100], str2[100];
gets(str);
gets(str2);
int n= strlen(str)+ strlen(str2);
char *string =malloc(n*sizeof(char));
strcpy(string, str);
strcat(string, str2);
printf("Result of concatenation: %s\n", string);
free(string);
return 0;
}

