#include<stdio.h>

int main()
{
    int n = 6;
    int a = 1;
    while (a<=n)
    {
        int j = 1;
        while (j<=a)
        {
            printf("%d",a);
            j++;
        }
        printf("\n");
        a++;
    }
    return 0;
}