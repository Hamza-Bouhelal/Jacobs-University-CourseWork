#include <stdio.h>
#include <stdlib.h>

/*
CH-230-A
a8 p5.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
int main() {
FILE *f1, *f2;
f1 = fopen("chars.txt", "r");
if (f1 == NULL){
printf("error");
return 0;}
int x,y;
x =(int)  getc(f1);
y = (int) getc(f1);
int s = x + y;
f2 = fopen("codesum.txt", "w");
if (f2 == NULL){
return 0;}
fprintf(f2, "%d", s);
return 0;
}


