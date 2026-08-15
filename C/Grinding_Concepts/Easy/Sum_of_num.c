#include<stdio.h>

int main()
{
    int n;
    printf("Enter the natural number to get sum of natural number till then: ");
    scanf("%d", &n);
    int sum = (n * (n + 1))/2;
    printf("Sum: %d",sum);
    return 0;
}