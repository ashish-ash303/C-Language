#include <stdio.h>

int main()
{

    int length, breath;

    printf("Please give the input of length \n");
    scanf("%d", &length);
    printf("Please give the input of breath\n");
    scanf("%d", &breath);

    int area = length * breath;

    printf("THe area of reactangle is :%d", area);
}
