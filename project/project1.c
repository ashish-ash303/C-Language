#include <Stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguess = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("THe random number is %d\n", number);

    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("You Have entered Higher   Number than  the Actual Number Please Enter some Lower Number \n");
        }
        else if (guess < number)
        {
            printf("You Have entered Lower   Number than  the Actual Number Please Enter some Higher Number  \n");
        }
        else
        {
            printf("You gusseed it in %d attempts\n", nguess);
            scanf("%d", &nguess);
        }
        nguess++;

    } while (guess != number);

    return 0;
}