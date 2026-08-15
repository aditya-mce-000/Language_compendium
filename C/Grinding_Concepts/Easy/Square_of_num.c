#include<stdio.h>

int main()
{
    int number;
    printf("Enter the number to get its square: ");
    scanf("%d",&number);
    int square = number * number;
    printf("The squarre is: %d", square);
    return 0;
}