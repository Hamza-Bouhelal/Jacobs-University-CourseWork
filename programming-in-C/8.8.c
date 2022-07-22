#include <stdio.h>
#include <stdlib.h>

/*
CH-230-A
a8 p7.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
int check(char c){
//checks if the character is one of the following character : " ,?!.\t\r\n"
char arr[8]=" ,?!.\t\r\n";
int i=0;
while(i!=8){
    i++;
    if(c==arr[i])
        return 1;
}
return 0;
}
int main() {
FILE *f1;
char name[50];
printf("enter a file name(.txt): ");
fgets(name, sizeof(name), stdin);
f1=fopen(name, "r");
/*
if(f1 == NULL ){
printf("error");
exit(1);
}*/
char c= fgetc(f1);
int idx=0;
char cp=c;
while(c!= EOF){
   if(check(c) && !check(cp))
   idx++;
cp=c;
c=fgetc(f1);
}
printf("the file contains %d words\n", idx);
return 0;
}

