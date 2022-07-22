#include <stdio.h>
#include <stdlib.h>

/*
CH-230-A
a8 p9.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
int main() {
int n;
scanf("%d", &n);
FILE **fdp=(FILE **)malloc(sizeof(FILE*)*n);
char **arrname=(char **)malloc(sizeof(char*)*n);
for(int i=0;i<n;i++){
    arrname[i] =( char *)malloc(sizeof(char)*50);
    fdp[i] = (FILE*)malloc(sizeof(FILE)*2);
    scanf("%s", arrname[i]);
    fdp[i]=fopen(arrname[i], "r");
    if(fdp[i]==NULL)
        exit(1);
}
char buffer[64];
FILE *con_result;
con_result=fopen("output.txt", "w");
if(con_result==NULL)
    exit(1);
printf("concatenating the content of %d files . . .\nThe result is:\n", n);
for(int i=0;i<n;i++){
    fread(buffer, 64, 1, fdp[i]);
    if(i==n-1)//last file
        {
        for(int i=63; i>=0;i++){
            if(buffer[i]=='\n'){
                buffer[i]='\0';
                break;
            }
        }
    }
    printf("%s", buffer);
    fwrite(buffer, 64, 1, con_result);
}
for(int i=0;i<n;i++){
    fclose(fdp[i]);
}
free(fdp);
for(int i=0;i<n;i++){
    free(arrname[i]);
}
free(arrname);
fclose(con_result);
printf("The result was written into output.txt\n");
return 0;}
