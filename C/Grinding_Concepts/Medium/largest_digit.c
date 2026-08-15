#include <stdio.h>

int main()
{
    int num = 546875979;
    if (num<0) num = -num;
    int check = num%10;
    while (num>0)
    {
        if (num%10 > check)
        {
            check = num%10;
        }
        num = num/10;
    }
    printf("Largest digit is %i", check);
    return 0;
}