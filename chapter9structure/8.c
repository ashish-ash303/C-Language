#include <stdio.h>
#include <string.h>
typedef struct complex
{
    int real;
    int imaginary;
} comp;

void display(comp c)
{
    printf("The real Value u entered is %d\n", c.real);
    printf("The imaginary Value u entered is %d\n", c.imaginary);
}
int main()
{
    comp number[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real Value %d\n", i + 1);
        scanf("%d", &number[i].real);

        printf("Enter the Imaginary Value %d\n", i + 1);
        scanf("%d", &number[i].imaginary);
    }
    for (int i = 0; i < 5; i++)
    {
        display(number[i]);
    }
    return 0;
}
