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


int main (void)
{
    printf("%d", myPeuler01(1000));
    myFirstFunction();
    return 0;
}



