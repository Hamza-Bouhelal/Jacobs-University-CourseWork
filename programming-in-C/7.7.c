#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/*
CH-230-A
a7 p7.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/

int main(){
Stack *sta;
sta=(Stack *)malloc(sizeof(Stack));
char c;
int i,idx=0;
while(1){
    scanf("%c", &c);
    switch(c){
     case 's':
         if(idx==12)
         printf("Pushing Stack Overflow\n");
         else{
         scanf("%d", &i);
         idx++;
         printf("Pushing %d\n", i);
         push(sta, i);}
         break;
     case 'p':
         idx--;
         sta=pop(sta);
         break;
     case 'e':
         printf("Emptying Stack ");
         empty(sta);
         break;
     case 'q':
         printf("Quit\n");
         return 0;
    }
}
return 0;
}





