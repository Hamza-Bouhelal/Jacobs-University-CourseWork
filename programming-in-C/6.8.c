#include <stdio.h>
#include <stdlib.h>
/*
CH-230-A
a6 p8.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
struct list{
    int info;
    struct list *next;
}*head;
void print_list ( struct list * l ) {
while (l != NULL ) {
printf("%d\n" , l->info );
l = l -> next ;
}}
struct list * push_front( struct list * my_list , int value ) {
struct list * newel ;
newel = ( struct list *) malloc ( sizeof ( struct list ));
if ( newel == NULL ) {
return my_list ;
}
newel -> info = value ;
newel -> next = my_list ;
my_list=newel;
return  my_list;
}
struct list * push_back ( struct list * my_list , int value ) {
struct list * cursor , * newel ;
cursor = my_list ;
newel = ( struct list *) malloc ( sizeof ( struct list ));
if ( newel == NULL ) {
return my_list ;
}
newel -> info = value ;
newel -> next = NULL ;
if ( my_list == NULL )
return newel ;
while ( cursor -> next != NULL )
cursor = cursor -> next ;
cursor -> next = newel ;
return my_list ;
}
void deleteFirstNode()
{
struct node *toDelete;
toDelete = head;
head = head->next;
free(toDelete);
}

int main()
{
struct list *l;
struct list * nextelem ;
char c,x;
while(1){
scanf("%c", &c);
getchar();
switch(c) {
   case 'a' :
      scanf("%d", &x);
      l=push_back(l,x);
      break;
   case  'b' :
      scanf("%d", &x);
      l=push_front(l,x);
      break;
   case  'r' :
    deleteFirstNode(l);
      break;
   case  'p' :
      print_list(l);
      break;
   case  'q' :
        while ( l != NULL ){
        nextelem = l -> next ;
        free (l);
        l = nextelem;
        }
      return 0;
   default :
       break;
}
printf("\n");
return 0;}}

