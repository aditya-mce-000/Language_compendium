#include<stdio.h>

//A func defined in C can call itself. This is called recursion and the function calling itself is called recursive function. 

int factorial(int n)
{
    if (n == 1 || n == 0)//base condition to ensure the func ends.
    {
        return 1;
    }
    //factorial n = n * factorial(n-1)
    return n * factorial(n-1);// using the concept of recursion
}

int main()
{
    int a = 6;
    printf("The factorial of %d is %d\n", a, factorial(a));
    return 0;
}