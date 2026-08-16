#include <stdio.h>

int main(void)
{
    int i = 0;
    int *j = &i;
    int **k = &j;
    printf("%i",**k);
    return 0;
}