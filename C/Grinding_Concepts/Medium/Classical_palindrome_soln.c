#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_to_check;
    printf("Enter the number: ");
    scanf("%d",&num_to_check);
    int num = num_to_check;
    int reversed_num = 0;
    while (num>0)
    {
        reversed_num = (reversed_num*10) + (num % 10);
        num = num / 10;
    }
    if (num_to_check == reversed_num)
    {
        printf("Palindrome");
    }
    else printf("Not Palindrome");
    return 0;
}