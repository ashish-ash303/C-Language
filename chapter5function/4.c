#include <stdio.h>
#include <math.h>

int main()
{
    int side;
    printf("Enter the side of square\n");
    scanf("%d", &side);
    printf("THe value of area is %f", pow(side, 2));

    return 0;
}