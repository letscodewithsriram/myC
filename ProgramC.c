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
    int k = 2, prime_array[100000] = {2,3};
    
    // for (int z = 0; z < 100; z++) {
    //     printf("%d -> ", prime_array[z]);
    // }
    // int pa_len = sizeof(prime_array) / sizeof(prime_array[0]); 
    for (int i = 4; i < max; i++) {
        // printf("Iteration 1 = %d\n", i);    
        int counter = 1;
        
        for (int pa_idx = 0; pa_idx < 100000; pa_idx++) {
            if (prime_array[pa_idx] != 0) {
                if ( i % prime_array[pa_idx] == 0) {
                    // printf ("prime_array[pa_idx]=%d, i=%d\n", prime_array[pa_idx], i);    
                    counter = 0;
                    break;
                }
            }
        }
        
        // Check 1 with Prime Numbers

        // for (int pa_idx = 0; pa_idx < 100; pa_idx++) {
        //     printf("prime_array[pa_idx]=%d, i=%d");
        //     if ((i % prime_array[pa_idx] == 0) && (prime_array[pa_idx] != 0))  {
        //         counter = 0;
        //         break;
        //     }
        // }

        // printf("Check 1 Results - i = %d, counter status = %d", i, counter);
        
        // Check 2 with All Numbers
        
        if (counter == 1) {
            for (int j = 2; j < max; j++) {
                if ((i % j == 0) && (i != j )){
                    counter = 0;
                    break;
                }
                    // printf("%d - %d -> %d\n", i, j, counter);
            }
        }

        // printf("Check 2 Results - i = %d, counter status = %d\n", i, counter);

        if (counter == 1) {
            // printf("Entered into loop i=%d, counter=%d, k=%d\n", i, counter, k);
            // printf("Index of Array is %d\n", k);
            prime_array[k] = i;
            // printf("%d->%d->%d\n", i, k, counter);
            k++;
        }
        // printf("Insertion Status - i = %d, counter status = %d\n", i, counter);
    }

    for (int z = 9990; z < 10010; z++) {
        printf("%d -> ", prime_array[z]);
    }
    
    return prime_array[10000];
}

int myPeuler10(int max) {
    for (int c=1; c<max; c++) {
        for (int b=1; b<c; b++) {
            for (int a=1; a<b; a++) {
                if ((a < b) && (b < c)) {
                    if ( ((a*a + b*b) == c*c) && (a + b + c == 1000)) {
                        printf ("a=%d, b=%d, c=%d\n", a,b,c);
                        return a*b*c;
                    }
                }    
            }
        }
    }
    return 0;
}

int main (void)
{
    printf("%d", myPeuler10(1000));
    // printf("%d", myPeuler07(1000000));
    // printf("%d", myPeuler06(101));
    // printf("%d", myPeuler02(100));   
    // printf("%d", myPeuler02(1000000));
    // printf("%d", myPeuler01(1000));
    // myFirstFunction();
    return 0;
}
