#include<stdio.h>

int fibonacci(int n);

int main()
{
    int n = 5;
    printf("The nth term of fibonacci is %d", fibonacci(n));
    return 0;
}

int fibonacci(int n)
{
    if (n == 1 || n==2){
        return n-1;//time complexity -- due to which writing a loop seems much better
    }
    return (fibonacci(n-1) + fibonacci(n-2));
}