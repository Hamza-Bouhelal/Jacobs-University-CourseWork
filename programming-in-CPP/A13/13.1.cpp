#include <iostream>
#include <cstdlib>
using namespace std;
/*
CH-230-A
a13 p1.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
int main() {

FILE *f1;
char  name[50];
cin.getline(name, 50);
f1=fopen(name, "r");
if(f1==NULL){
  cout<<"error getting file";
  exit(1);
}
char name2[50];
int i=0;
while(name[i]!='.'){
  name2[i]=name[i];
  i++;
}
name2[i]='_';
name2[i+1]='c';
name2[i+2]='o';
name2[i+3]='p';
name2[i+4]='y';
name2[i+5]='.';
name2[i+6]='t';
name2[i+7]='x';
name2[i+8]='t';
FILE *f2;
f2=fopen(name2, "w");
char c=fgetc(f1);
while(c!=EOF){
fprintf(f2, "%c", c);
c=fgetc(f1);
}
fclose(f1);
fclose (f2);
return 0;
}
