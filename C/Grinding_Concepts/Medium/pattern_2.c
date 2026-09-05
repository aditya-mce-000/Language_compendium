#include<stdio.h>

int main()
{
    int n = 6;
    int a = n;
    while (a>0)
    {
        int j = 1;
        while (j<=a)
        {
            printf("*");
            j++;
        }
        printf("\n");
        a--;
    }
    return 0;
}