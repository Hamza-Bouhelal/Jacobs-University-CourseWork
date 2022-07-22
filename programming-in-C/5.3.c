#include <stdio.h>
#include <string.h>

/*
CH-230-A
a5 p3.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
int count_lower(char* str){
int c=0;
char* char_str= str;
while(*char_str != 0){
    if(*char_str >= 'a' && *char_str <= 'z')
      c++;
    char_str++;
}
return c;
}
int main()
{
char str[50];
char* char_str=(char*)str;
while(1){
printf("write a string:\n");
fgets(str, sizeof(str), stdin);
 if(*char_str =='\n')
  break;
 else
  printf("The string contain %d lowercase character.\n", count_lower(str));
printf("\n");
}
return 0;
}

