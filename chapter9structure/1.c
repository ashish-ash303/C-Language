#include <stdio.h>
// #include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1;
    e1.code = 100;
    e1.salary = 40000.12;
    // e1.name="Ashish";
    strcpy(e1.name, "Ashish");

    struct employee e2;
    e2.code = 120;
    e2.salary = 4000.12;
    // e1.name="Ashish";
    strcpy(e2.name, "Harry");

    struct employee e3;
    e3.code = 150;
    e3.salary = 400.12;
    // e1.name="Ashish";
    strcpy(e3.name, "SS");

    printf("%d\n", e1.code);
    printf("%.2f\n", e1.salary);
    printf("%s\n", e1.name);

    printf("%d\n", e2.code);

    printf("%.2f\n", e2.salary);

    printf("%s\n", e2.name);

    printf("%d\n", e3.code);
    printf("%.2f\n", e3.salary);
    printf("%s\n", e3.name);

    return 0;
}