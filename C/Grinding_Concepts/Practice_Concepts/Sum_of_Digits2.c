#include<stdio.h>

int main()
{
    int user_num;
    printf("Enter the integer to get the sum of digits in it: ");
    scanf("%d",&user_num);
    
    if (user_num<0) 
    {
        user_num = -(user_num);
    }
    int sum = 0;
    while (user_num>0)
    {
        sum += (user_num % 10);
        user_num = user_num / 10;
    }
    printf("Sum of Digits: %d", sum);
    return 0;
}

