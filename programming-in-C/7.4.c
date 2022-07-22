#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/*
CH-230-A
a7 p4.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
void fun1(char *str)
{
for(int i=0;i<strlen(str); i++){
    str[i]= toupper(str[i]);
}
}

void fun2(char *str)
{
for(int i=0;i<strlen(str); i++){
    str[i]= tolower(str[i]);
}
}

void fun3(char *str)
{
for(int i=0;i<strlen(str); i++){
    if(str[i] >= 'A' && str[i] <= 'Z')
    str[i]= tolower(str[i]);
    else
    str[i]= toupper(str[i]);
}
}

void fun4(char *str)
{
free(str);
exit(1);
}


void(*func_ptr[4])(char *str) = {fun1, fun2, fun3, fun4};
int main()
{
char str[50];
fgets(str, sizeof(str), stdin);
char *string=malloc(strlen(str)*sizeof(char));
int i;
while(1){
strcpy(string, str);
scanf("%d", &i);
(*func_ptr[i-1])(string);
printf("%s", string);
}
return 0;
}


