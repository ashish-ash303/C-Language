// accesing array using pointer
#include <stdio.h>

int main()
{
    int marks[4];
    int *j;
    j = &marks[0];
    // j=marks;
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the Value of marks fr  student %d :\n", i + 1);
        scanf("%d", j);
        j++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf(" the Value of marks for  student is %d : %d\n", i + 1, marks[i]);
    }
    return 0;
}