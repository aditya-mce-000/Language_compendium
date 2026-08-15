#include<stdio.h>

int main()
{
    int num_to_check;
    printf("Enter the number: ");
    scanf("%d",&num_to_check);
    int num = num_to_check;
    int dig_count = 1;
    while( num >= 10 || num <=(-10) )
    {
        num = num/10;
        dig_count++;
    }//We have counted the digits.
    // printf("%d",dig_count);
    int place_holder = 1;
    while (dig_count > 1)
    {
        place_holder *= 10 ;
        dig_count-- ;
    }//We have made initial place holder
    // printf("%d",place_holder);
    int num_copy = num_to_check;
    int reversed_num = 0;
    while (num_copy > 0) 
    {
        reversed_num += (place_holder*(num_copy % 10));//dividend = divisor*quotient+remainder
        // else reversed_num += -(place_holder*(num_copy % 10));
        num_copy = num_copy/10;
        place_holder /= 10;
    }//making the reversed number
    if (reversed_num == num_to_check)
    {
        printf("%d is a palindrome.",num_to_check);
    }
    else
    {
        printf("%d is not palindrome.",num_to_check);
    }
    return 0;
}