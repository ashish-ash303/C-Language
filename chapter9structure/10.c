#include <stdio.h>
#include <string.h>
typedef struct datetime
{
    int day;
    int month;
    int year;
    int hour;
    int minute;
    int seconds;

} dt;
int display(dt time1, dt time2)
{
    printf("The date and time is %d %d %d %d %d %d \n", time1.day, time1.month, time1.year, time1.hour, time1.minute, time1.seconds);
    printf("The date and time is %d %d %d %d %d %d \n", time2.day, time2.month, time2.year, time2.hour, time2.minute, time2.seconds);
}

int dtcomp(dt time1, dt time2)
{
    if (time1.year > time2.year)
    {
        return 1;
    }
    if (time1.year < time2.year)
    {
        return -1;
    }
    if (time1.month > time2.month)
    {
        return 1;
    }
    if (time1.month < time2.month)
    {
        return -1;
    }
    if (time1.day > time2.day)
    {
        return 1;
    }
    if (time1.day < time2.day)
    {
        return -1;
    }
    if (time1.hour > time2.hour)
    {
        return 1;
    }
    if (time1.hour < time2.hour)
    {
        return 1;
    }
    if (time1.minute > time2.minute)
    {
        return 1;
    }
    if (time1.minute < time2.minute)
    {
        return -1;
    }
    if (time1.seconds < time2.seconds)
    {
        return 1;
    }
    if (time1.seconds < time2.seconds)
    {
        return -1;
    }
    return 0;
}
int main()
{
    dt time1 = {22, 05, 2021, 20, 35, 44};
    dt time2 = {20, 06, 2020, 21, 33, 24};
    display(time1, time2);
    // display(time2);
    int b = dtcomp(time1, time2);
    printf("%d", b);
    return 0;
}