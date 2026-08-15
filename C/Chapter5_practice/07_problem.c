#include<stdio.h>

void star(int n);

int main()
{
    int n = 9;
    star(n);
    return 0;
}

void star(int n)
{
    int a = 1;
    int l = n;
    while (a<=l)
    {
        if (a%2 == 0) printf("\n");
        else
        {
            int b = 1;
            while (b<=a)
            {
                printf("*");
                b++;
            }
            printf("\n");
        }
        a++;
    }
}