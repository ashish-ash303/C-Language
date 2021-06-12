#include <stdio.h>
#include <conio.h>

int main()
{

    int money;
    printf("Enter ur money \n");
    scanf("%d", &money);

    //|| :- or &&:-and

    if (money > 30000 || money < 70000)
    {
        printf("you cannot buy the iphone ");
    }
    else if (money == 25000)
    {
        printf("You can buy  oneplus nord");
    }
    else
    {
        printf("You can buy anyphone");
    }
    return 0;
}