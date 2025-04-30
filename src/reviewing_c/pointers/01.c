#include <stdio.h>

int main(void){
    int var = 10;
    int *intptr = &var;
    int **ptrptr = &intptr;

    printf("var: %d \nAddress of var: %p \n\n", var, &var);
    printf("inttptr: %p \nAddress of inttptr: %p \n\n", intptr, &intptr);
    printf("inttptrtptr: %p \nAddress of inttptrtptr: %p \n\n", ptrptr, &ptrptr);


    return 0;
}