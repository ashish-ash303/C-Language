#include <stdio.h>

int main()
{

    int rating;
    printf("You give the rating ", rating);
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:
        printf("You Gave the 1 Star Rating ");
        break;
    case 2:
        printf("You Gave the 2 Star Rating ");
        break;
    case 3:
        printf("You Gave the 3 Star Rating ");
        break;
    case 4:
        printf("You Gave the 4 Star Rating ");
        break;
    case 5:
        printf("You Gave the 5 Star Rating ");
        break;

    default:
        printf("Your Rating is Invalid");
        break;
    }
    return 0;
}