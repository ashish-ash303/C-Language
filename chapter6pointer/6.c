// Find the sum and average of two number USing pointers

#include <stdio.h>
void sumandaverage(int a, int b, int *sum, float *avg);
int main()
{
    int i = 3, j = 5, sum;
    float avg;
    sumandaverage(i, j, &sum, &avg);
    printf("The Sum of Two number is %d\n ", sum);
    printf("The average of Two number is %.f\n ", avg);

    return 0;
}
void sumandaverage(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = *sum / 2;
}