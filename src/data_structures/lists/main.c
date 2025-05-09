#include <stdio.h>
#include "list.h"

int main(void){
    List* l = create_list();
    add(l, 1);
    add(l, 2);
    add(l, 3);
    printList(l);
    printf("Size: %d\n", l->size);
    return 0;
}