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
    // day d1,d2;
    day d1 = {8, 5, 2026};
    day d2 = {9,3, 2026};

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