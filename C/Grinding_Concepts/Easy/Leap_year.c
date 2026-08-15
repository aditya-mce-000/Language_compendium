#include<stdio.h>

int main()
{
    int year = 1604;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) printf("Leap year");
    else printf("Not Leap Year.");
    return 0;
}