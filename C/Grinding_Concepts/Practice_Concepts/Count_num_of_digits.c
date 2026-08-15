#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int digits = 1;
    int counter = 10;
    while (counter < num)
    {
        counter *= 10;
        digits++;
    }
    printf("Ther are %d digits in the number.", digits);
    return 0;
}