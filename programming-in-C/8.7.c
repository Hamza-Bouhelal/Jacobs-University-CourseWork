#include <stdio.h>
#include <stdlib.h>

/*
CH-230-A
a8 p7.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
int main() {
FILE *f1,*f2,*f3;
f1=fopen("text1.txt", "r");
f2=fopen("text2.txt", "r");
f3=fopen("merge12.txt", "w");
if(f1 == NULL || f2 == NULL || f3 == NULL){
printf("error");
exit(1);
}
char string[1000];
while (fgets(string, 1000, f1) != NULL)
fprintf(f3, "%s", string);
while (fgets(string, 1000, f2) != NULL)
fprintf(f3, "%s", string);
fclose(f1);
fclose(f2);
fclose(f3);
fgets(string, 100, f1);
return 0;
}
