#include <stdio.h>

int main()
{
    int marks;

    printf("Enter Your Marks \t");
    scanf("%d", &marks);

    if (marks > 90 && marks <= 100)
    {
        printf("You Got the A Grade!!!!");
    }
    else if (marks > 80 && marks <= 90)
    {
        printf("You Got the B Grade");
    }
    else if (marks > 70 && marks <= 80)
    {
        printf("You Got the Grade C");
    }
    else if (marks > 60 && marks <= 70)
    {
        printf("You Got the Grade D");
    }
    else if (marks <= 60)
    {
        printf("You Got the Grade E");
    }

    return 0;
}