#include<stdio.h>

int sum(int n);

int main()
{
    int n = 2;
    printf("The sum of natural numbers till n is %d\n", sum(n));
    return 0;
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sum(n-1);
}