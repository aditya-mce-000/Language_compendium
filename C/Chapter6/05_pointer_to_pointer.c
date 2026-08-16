#include <stdio.h>

int main(void)
{
    int i = 8;
    int *j = &i;
    int **k = &j;// address of address
    printf("%p\n", j);
    printf("%p\n", k);
    return 0;
}