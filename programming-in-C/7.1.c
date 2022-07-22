#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
/*
CH-230-A
a7 p1.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
int main(){
  char c;
  int n;
  struct list *l=NULL;
  while(1){
     scanf("%c",&c);
     switch (c){
     case 'a':
        scanf("%d",&n);
        l=push_back(l,n);
              break;
      case 'b':
            scanf("%d",&n);
            l=push_front(l,n);
              break;
      case 'p':
                print_list(l);
              break;
      case 'r':
            l=deleteFirstNode(l);
              break;
      case 'q':
            fr(l);
            return 0;
      }
  }
return 0;
}

