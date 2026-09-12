#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr;
    ptr = (int *)malloc(5*sizeof(int));

    ptr = (int *)realloc(ptr, 10*sizeof(int));
    return 0;
}