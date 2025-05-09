#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);

    int actual_sum = 0;

    for(int i = 0; i < n-1; i++){
        int num;
        scanf("%d", &num);
        actual_sum += num;
    }

    long expected_sum = (long)(n * (n + 1)/2);
    

    printf("%d\n", expected_sum - actual_sum);

    return 0;
}

