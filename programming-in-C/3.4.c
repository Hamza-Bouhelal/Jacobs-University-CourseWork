/*
CH-230-A
a3 p4.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
#include <stdio.h>
int position(char str[], char c)
{
int idx;
/* Loop until end of string */
for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx)
{}//{} were missing so the for loop had for argument return idx
/* do nothing */
return idx+1;
}
int main() {
char line[80];
while (1) {
printf("Enter string:\n");
fgets(line, sizeof(line), stdin);
printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
}
}
