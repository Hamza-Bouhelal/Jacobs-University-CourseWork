#include <stdio.h>
#include <stdlib.h>

/*
CH-230-A
a7 p1.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/

struct list{
    char info;
    struct list *next;
    struct list *prev;
}*head;

typedef struct list List;

void print_list ( List* l ) {
	List *ptr;
	for (ptr=l; ptr; ptr=ptr -> next) {
		printf("%c ",ptr->info);
		}

}

void print_list_b ( List* l ) {
	List *ptr;
	if(l==NULL){
        printf("\n");
        return;
	}
	for (ptr = l; ptr->next != NULL; ptr = ptr->next){}
	for (ptr=NULL; ptr; ptr->prev) {
		printf("%c ",ptr ->info);
	}
}

List *add_to_list( List *my_list , char value ) {
List * newel= (List *)malloc(sizeof(List));
if ( newel == NULL ) {
        printf (" Error allocating memory \n");
        return my_list ;
    }
newel->info = value;
if(my_list != NULL)
my_list->prev = newel;
newel->next = my_list;
newel->prev = NULL;
return newel;
}

List *remove_n(List *my_list, char n){
int i =0;
while(my_list != NULL){
if(my_list ->info == n)
    {
        List *p = my_list->next;
        my_list ->info = NULL;
        my_list = p;
        i++;
    }
    }
    if(i==0)
        printf("The element is not in the list!\n");
    return my_list;
}

void fr(List *my_list){
struct list *nextelem;
while ( my_list != NULL ){
nextelem = my_list -> next ;
free (my_list);
my_list = nextelem;
}}

int main(){
  int c;
  char n;
  List *l = NULL;
  while(1){
     scanf("%d",&c);
     switch (c){
      case 1:
            scanf("%c",&n);
            l=add_to_list(l,n);
              break;
      case 2:
            scanf("%c", &n);
            l=remove_n(l,n);
              break;
      case 3:
            print_list(l);
              break;
      case 4:
            print_list_b(l);
              break;
      case 5:
            fr(l);
           exit(1);
}
}
return 0;
}
