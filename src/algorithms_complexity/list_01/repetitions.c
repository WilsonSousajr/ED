#include <stdio.h>
#include <string.h>


int main(void){
    char string[10000000];
    scanf("%s", string);
    int count = 0;

    for(int i = 1; i < strlen(string); i++){
        if(string[i] == string[i-1]){
            count++;
        }
        else{
            count = 0;
        }
    }

    printf("%d\n", count);
    return 0;
}