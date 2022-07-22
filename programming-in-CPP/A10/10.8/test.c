#include <stdio.h>
int main(){
int a=10;
int b=1;
while(1){
    if(a==0){
    break;
    }
    b=2*b;
    a--;
    printf("a= %d\n", a);
    printf("b= %d\n\n", b);
}
return 0;
}
