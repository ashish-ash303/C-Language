#include <stdio.h>

int main()
{
    int radius;
    printf("please enter the radius of circle ");
    scanf("%d", &radius);
    float pi = 3.14;
    float area = 2 * pi * radius;

    printf("THe area of circle is %f", area);
    return 0;
}