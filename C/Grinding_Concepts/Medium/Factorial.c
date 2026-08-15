#include<stdio.h>

int main()
{
    int num = 10;
    int factorial = 1;
    while (num > 0)
    {
        factorial *= num;
        num--;
    }
    printf("Factorial is %d",factorial);
    return 0;
}