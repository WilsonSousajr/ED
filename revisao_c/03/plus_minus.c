#include <stdio.h>

int main(void){
    int size;
    float negatives, positives, zeros;
    float negatives_ratio, positives_ratio, zeros_ratio;

    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            zeros += 1;
        }
        else{
            if(arr[i] > 0){
                positives += 1;
            }
            else{
                negatives += 1;
            }
        }
    }


    positives_ratio = positives / size;
    negatives_ratio = negatives / size;
    zeros_ratio = zeros / size;

    printf("%.6f\n", positives_ratio);
    printf("%.6f\n", negatives_ratio);
    printf("%.6f\n", zeros_ratio);

}