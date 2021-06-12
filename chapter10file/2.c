#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    int num2;
    // ptr = fopen("sample.txt"->file name, "r"-mode );
    ptr = fopen("sampl3e.txt", "r");
    if (ptr == NULL)
    {
        printf("File not exist");
    }
    else
    {
        fscanf(ptr, "%d", &num); // for scanning the value
        fscanf(ptr, "%d", &num2);
        fclose(ptr);
        printf("The Value of num is %d\n", num);
        printf("The Value of num 2 is %d\n", num2);
        return 0;
    }
}