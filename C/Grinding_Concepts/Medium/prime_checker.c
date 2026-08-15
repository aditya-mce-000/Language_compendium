#include<stdio.h>

int main()
{
    int num = 2;
    int initial = 2;
    int is_prime = 1;
    while (initial < num)
    {
        if (num % initial == 0)
        {
            is_prime = 0;
            break;
        }
        else
        {
            initial++;
        }
    }
    if (is_prime == 0 || num == 0 || num == 1) printf("Not Prime");
    else printf("Prime");
    return 0;
}