#include <stdio.h>
#include <string.h>
void edge(char s1[], char s2[]){
int x = 0;
for(int i = 0;i<strlen(s1)-1;i++){
    if(s1[i]!= '0' && s1[i]!='1'){
        strcpy(s2,"Edge detection: wrong input pattern");
        x = 1;
        break;
        }
}

if(x == 0){
    for(int i =0;i<strlen(s1)-1;i++){
        s2[i]=0;
    }
    s2[0]='0';
    for(int i = 0;i<strlen(s1)-2;i++){
        if((s1[i]==s1[i+1])){
            s2[i+1] = '0';
        }
        else{
            s2[i+1]= '1';
        }
    }
}
}
int main(){
    char  s1[125];
    fgets(s1, sizeof(s1), stdin);
    printf("Number of bits read: %d\n", strlen(s1)-1);
    char s2[strlen(s1)-1];
    edge(s1,s2);
    printf("The output bit pattern: ");
    for(int i =0;i<strlen(s1)-1;i++)
    printf("%c", s2[i]);
    return 0;
 }
