#include <stdio.h>
#include <stdlib.h>
/*
CH-230-A
a8 p6.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
int main() {
double var1,var2;
FILE *f1,*f2,*f3;
char fname1[50], fname2[50];
printf("The name of the first file: ");
fgets(fname1, sizeof(fname1), stdin);
printf("The name of the second file: ");
fgets(fname2, sizeof(fname2), stdin);
printf("The name of the first file: %s\n", fname1);
printf("The name of the second file: %s\n", fname2);
f1=fopen(fname1, "r");
f2=fopen(fname2, "r");
f3=fopen("result.txt", "w");
if(f1==NULL || f2==NULL || f3==NULL){
    printf("error");
    return 0;
}
fscanf(f1, "%lf", &var1);
fscanf(f2, "%lf", &var2);
fprintf(f3, "sum = %lf\n", var1+var2);
fprintf(f3, "difference = %lf\n", var1-var2);
fprintf(f3, "product = %lf\n", var1*var2);
fprintf(f3, "division = %lf\n", var1/var2);
fclose(f1);
fclose(f2);
fclose(f3);
return 0;
}
