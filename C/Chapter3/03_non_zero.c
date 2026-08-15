#include<stdio.h>

int main()
{
    if (1)
    {
        printf("This is true. So this is executed.\n");
    }
    if(2345)
    {
        printf("Non zero is true and hence this is also executed.\n");
    }
    if (0)
    {
        printf("This is not executed. Since this is zero and a false value.\n");
    }
    if ('c')
    {
        printf("This is also executed.\n");
    }
    return 0;
}