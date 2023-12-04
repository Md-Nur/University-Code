#include <stdio.h>

void main(){
    int numbers[100], primes[100], count;
    printf("How many numbers: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        primes[i] = 0;

        for (int j = 1; j < numbers[i]; j++){
            if (numbers[i] % j == 0){
                primes[i]++;
            }
        }
    }

    printf("Prime numbers are: ");
    for (int i = 0; i < count; i++){
        if (primes[i] == 2){
            printf("%d ", numbers[i]);
        }
    }
}