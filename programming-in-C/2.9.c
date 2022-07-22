#include <stdio.h>
/*
CH-230-A
a2 p9.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
int main() {
//I used a string to be able to scan
//as many character as we want
char str;
scanf("%c", &str);
getchar();
//in order to determinate whether our
//character is a digit or a letter or
//else we can use the character's ASCII value
if((int) str <58 && (int )str >47){
    printf("%s is a digit\n", str);
}
else if(((int) str <91 && (int) str >64) || ((int) str <123 && (int) str >96))
{
    printf("%s is a letter\n", str);
}
else{
   printf("%s is some other symbol\n", str);
}
return 0;
}


