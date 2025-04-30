#include <stdio.h>

int fatorial(int n);

int main(void){

    int x = 5;
    int fatorial_result = fatorial(x);

    printf("%d\n", fatorial_result);

    return 0;
}

int fatorial(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n*fatorial(n-1);
    }
}