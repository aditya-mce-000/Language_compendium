#include <stdio.h>

int main(void)
{
    // A pointer can be incremented to point to the next memory location of that type.
    int a[] = {10,274, 678, 9835, 9608, 2025};
    int i = 0;
    while (i < 6)
    {
        printf("%i\n", a[i]);
        printf("The address of i is %p\n", &a[i]);
        i++;
    }
    return 0;
}