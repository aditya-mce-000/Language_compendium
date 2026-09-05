#include <stdio.h>

typedef struct date
{
    int da;
    int month;
    int year;
} day;

void compare(day d1, day d2);

int main(void)
{
    day d1,d2;
    d1.da = 12;
    d1.month = 2;
    d1.year = 2026;
    d2.da = 8;
    d2.month = 5;
    d2.year = 2026;

    compare(d1,d2);

    return 0;
}

void compare(day d1, day d2)
{
    if (d1.year == d2.year)
    {
        if (d1.month == d2.month)
        {
            if (d1.da == d2.da)
            {
                printf("d1 is same as d2");
            }
            else if (d1.da > d2.da)
            {
                printf("d2 comes before d1");
            }
            else
            {
                printf("d2 comes after d1");
            }
        }
        else if (d1.month > d2.month)
        {
            printf("d2 comes before d1");
        }
        else
        {
            printf("d2 comes after d1");
        }
    }
    else if (d1.year > d2.year)
    {
        printf("d2 comes before d1");
    }
    else
    {
        printf("d2 comes after d1");
    }   
}