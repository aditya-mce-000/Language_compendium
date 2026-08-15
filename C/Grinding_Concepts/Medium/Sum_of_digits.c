#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 234234;
    int sum = 0;
    while (num>0)
    {
        int rem = num % 10;
        num = num/10;
        sum += rem;
    }
    printf("sum of digits is %d", sum);
    return 0;
}