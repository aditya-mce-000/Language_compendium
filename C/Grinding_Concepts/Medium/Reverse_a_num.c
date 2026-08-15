#include<stdio.h>

int dig_counter(int num)
{
    int count = 0;
    int place = 1;
    if (num == 0)
    {
        count = 1;
    }
    if (num<0)
    {
        num = -num;
    }
    while (place <= num)
    {
        place *= 10;
        count++;
    }
    return count;
}

int main()
{
    int num;
    printf("Enter the num: ");
    scanf("%d", &num);
    int digits = dig_counter(num);
    int place_value = 1;
    while (digits>1)
    {
        place_value *= 10;
        digits--;
    }
    int rem;
    int rev = 0;
    // if (num<10 && num>-10) rev = num;
    while (num != 0)
    {
        rem = num%10;
        num = num/10;
        rev = rev + rem*place_value;
        place_value /= 10;
    }
    printf("Reversed_num = %d",rev);
    return 0;
}