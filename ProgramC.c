# include <stdio.h>
# include <stdlib.h>

int myFirstFunction(void) {
    printf("Hello, World!");
    return 0;
}

int myPeuler01(int max) {
    int sum = 0;
    for (int i=1; i < max; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            printf("%d\n", i);
            sum = sum + i;
        }
    }
    // printf("%d", sum);
    return sum;
}

int myPeuler02(int nums) {
    int num0, num1;
    num0 = 0;
    num1 = 1;
    int fSeries;
    int sum = 0;
    for (int i=0; i<nums; i++) {
            fSeries = num0 + num1;
            num0 = num1;
            num1 = fSeries;
            if (fSeries < 4000000 && fSeries % 2 == 0) {
                printf ("%d + %d = %d \n", num0, num1, fSeries);
                sum = sum + fSeries;
            }
            if (fSeries > 4000000){
                break;
            }
    }
    return sum;
}

int myPeuler06(int max) {
    int sqreSum = 0, sumSqre = 0;
    for ( int i = 0; i < max; i++) {
        sumSqre = sumSqre + (i*i);
        sqreSum = sqreSum + i;
    }
    sqreSum = sqreSum * sqreSum;
    printf("%d, %d\n", sumSqre, sqreSum);
    return sqreSum - sumSqre;
}

int myPeuler07(int max) {
    int k = 0, prime_array[100] = {};
    int pa_len = sizeof(prime_array) / sizeof(prime_array[0]); 
    for (int i = 2; i < max; i++) {
        for (int pa_idx = 0; pa_idx < pa_len; pa_idx++) {
            if ((i % prime_array[pa_idx] != 0) && (prime_array[pa_idx] != 0)){
                int counter = 1;
                for (int j = 2; j < max; j++) {
                    if ((i % j == 0) && (i != j )){
                        counter = 0;
                        break;
                    }
                    // printf("%d - %d -> %d\n", i, j, counter);
                }
                if (counter) {
                    // printf("Entered into loop i=%d, counter=%d, k=%d\n", i,counter,k);
                    // printf("Index of Array is %d\n", k);
                    prime_array[k] = i;
                    // printf("%d->%d->%d\n", i, k, counter);
                    k++;
                }
            }
        }
    }

    for (int z = 1; z < 100; z++) {
        printf("%d -> ", prime_array[z]);
    }
    return 555;
}

int main (void)
{
    printf("%d", myPeuler07(100));
    // printf("%d", myPeuler06(101));
    // printf("%d", myPeuler02(100));   
    // printf("%d", myPeuler02(1000000));
    // printf("%d", myPeuler01(1000));
    // myFirstFunction();
    return 0;
}
