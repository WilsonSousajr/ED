#include <stdio.h>


int main(void){
    int size;
    int sum = 0;

    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size; i++){
        sum += arr[i];
    }

    printf("%d\n", sum);
}