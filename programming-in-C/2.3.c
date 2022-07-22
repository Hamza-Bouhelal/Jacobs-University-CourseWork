#include <stdio.h>
/*
CH-230-A
a2 p3.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
int main() {
int w, d, h;
printf("the numbers of weeks:\n");
//here we get how many weeks
scanf("%d", &w);
printf("the numbers of days:\n");
//here we get how many days
scanf("%d", &d);
printf("the numbers of hours:\n");
//here we get how many hours
scanf("%d", &h);
//converting everything to hours
//and adding up
int s= h + 24*d + 7*24*w ;
printf("the numbers of hours:%d", s);
return 0;
}
