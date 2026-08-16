#include <stdio.h>

void ten(int i)
{
    i = 10 * (i);
}

int main()
{
    int i = 9;
    ten(i);// does not change the value of i
    printf("%i\n", i);
    return 0;
}