#include <stdio.h>
#include <stdlib.h>

/*
CH-230-A
a7 p6.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
struct person {
char name[30];
int age;
};

void bubble_sort_a(struct person a[], int n) {
    struct person tmp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i-1 ; j++) {
            if (a[j].age> a[j + 1].age) {
                //swap
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }}
void bubble_sort_b(struct person a[], int n) {
    struct person tmp;
    //ordering alphabetically if 2 people have the same age
    for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        //here checking for the first letter
    if((int)a[i].name[0]>(int)a[j].name[0]){
    tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;}
    else if((int)a[i].name[0]==(int)a[j].name[0]){
            //here checking for the second letter
            if((int)a[i].name[1]>(int)a[j].name[1]){
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;}
    }}}}
void(*bubble_sort_ptr[2])(struct person a[], int n) = {bubble_sort_a, bubble_sort_b};
int main(){
int n;
scanf("%d", &n);
struct person arr[n];
for(int i=0;i<n;i++){
    scanf("%s", &arr[i].name);
    scanf("%d", &(arr[i].age));
}
(*bubble_sort_ptr[1])(arr, n);
for(int i=0;i<n;i++){
printf("{%s, %d}; ", arr[i].name, arr[i].age);
}
printf("\n");

(*bubble_sort_ptr[0])(arr, n);
for(int i=0;i<n;i++){
printf("{%s, %d}; ", arr[i].name, arr[i].age);
}
printf("\n");
return 0;
}




