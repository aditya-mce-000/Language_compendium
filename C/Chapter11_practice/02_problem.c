#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr;
    ptr = (int *)malloc(6*sizeof(int));

    for (int i = 0; i < 6; i++)
    {
        printf("index %d: ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        // printf("index %d", i);
        printf("%d\n", ptr[i]);
    }
    return 0;
}