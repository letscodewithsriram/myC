# include <stdio.h>

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

int main (void)
{
    printf("%d", myPeuler02(1000000));
    // printf("%d", myPeuler01(1000));
    // myFirstFunction();
    return 0;
}



