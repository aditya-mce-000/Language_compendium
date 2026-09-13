#include <stdio.h>

int main()
{
    int a,b;
    printf("a b: ");
    scanf("%d %d", &a, &b);
    // printf("b");

    if (b == 0)
    {
        printf("Invalid you can not have denom as zero.");
        return 1;
    }

    printf("int division: %d\n", a/b); // the results vary because int division gives int part of the division'and float division gives the actual division result
    printf("float division: %f\n", (float)a/b);
    return 0;
}