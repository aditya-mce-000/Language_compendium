#include<stdio.h>

int main()
{
    // condition ? if true-expression: if false-expression;
    int a, b;
    printf("Enter integer a: ");
    scanf("%d",&a);
    printf("Enter integer b: ");
    scanf("%d",&b);
    a>b?printf("a is greater"):printf("b is greater");
    return 0;// this is a shorthand method
}