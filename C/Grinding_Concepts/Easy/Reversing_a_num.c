#include<stdio.h>

int digit_counter(int num)
{
    if (num < 0)
    {
        num = -num;
    }
    int digits = 1;
    int counter = 10;
    while (counter <= num)
    {
        counter *= 10;
        digits++;
    }
    return digits;
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int digits = digit_counter(num);
    int dig_count = 1;
    int rev_counter = 1;
    while (dig_count < digits)
    {
        rev_counter *= 10;
        dig_count++;
    }
    int rev_num = 0;
    int printable;
    while (num != 0)
    {
        printable = num % 10;
        num = num / 10;
        rev_num += printable * rev_counter;
        rev_counter /= 10;
    }
    printf("Reversed number = %d",rev_num);
}