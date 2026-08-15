#include <stdio.h>

int main()
{
    int i = 1;
    int* j = &i;

    // Use %p cast to (void *) for memory addresses
    printf("add i = %p\n", (void *)&i);
    printf("add i = %p\n", (void *)j);
    printf("add j = %p\n", (void *)&j);

    // Use %d for standard integer values
    printf("value i = %d\n", i);
    printf("value i = %d\n", **(&j)); // Double dereference to get 'i'
    printf("value i = %d\n", *j);     // Single dereference to get 'i'

    return 0;
}