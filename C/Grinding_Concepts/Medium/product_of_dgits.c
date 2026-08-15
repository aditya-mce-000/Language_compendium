#include <stdio.h>

int main()
{
    int num = 543;
    int product = 1;
    while (num>0)
    {
        int rem = num % 10;
        num = num / 10;
        product *= rem;
    }
    if (num == 0) printf("0");
    else printf("product is %d",product);
    return 0;
}