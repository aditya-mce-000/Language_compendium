#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //calloc(30, sizeof(type)) is almost same as malloc but different in syntax and has all value initialized to 0 and not random garbage
    int n;
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));

    ptr[3] = 3;
    printf("%d", ptr[3]);
    return 0;
}