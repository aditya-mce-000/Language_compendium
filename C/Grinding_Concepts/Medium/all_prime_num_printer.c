#include<stdio.h>

int main()
{
    int n = 1;
    int i = 1;
    while (i<=n)
    {
        int r = 2;
        int is_prime = 1;
        while (r<i)
        {
            if (i%r == 0) 
            {
                is_prime = 0;
                break;   
            }
            r++;
        }
        if (is_prime == 1 && i!=1 ) printf("%d\n",i);
        i++;
    }
    printf("Over");
}