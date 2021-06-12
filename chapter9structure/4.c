// passing struct in function
#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
void show(struct employee emp)
{
    printf("%d\n", emp.code);
    printf("%.2f\n", emp.salary);
    printf("%s\n", emp.name);
}
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    // (*ptr).code = 101;Same
    ptr->code = 191;
    ptr->salary = 191;
    strcpy(ptr->name, "Ashish");
    show(e1);

    return 0;
}