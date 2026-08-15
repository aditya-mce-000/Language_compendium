#include<stdio.h>

int main()
{
    int a = 98;
    int b = 78;
    int c = 99;
    if (a>b && a>c)
    {
        printf("a is greatest.");
    }
    else if (b>c)
    {
        printf("b is greatest.");
    }
    else
    {
        printf("c is greatest.");
    }
    return 0;
}