#include <stdio.h>

int main()
{
    int principal, years, rate;

    printf("The principal amount is ");
    scanf("%d", &principal);
    printf("The principal amount is taken  for  ");
    scanf("%d", &years);
    printf("The principal amount is taken at the rate of ");
    scanf("%d", &rate);

    int si = (principal * years * rate) / 100;
    printf("The simple interest  is %d", si);
    return 0;
}