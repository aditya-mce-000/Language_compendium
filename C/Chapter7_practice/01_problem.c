#include <stdio.h>

int main(void)
{
    int arr[] = {1,2,3,4,6,7,5,8,9,0};
    int *ptr = arr;
    printf("%d\n", *ptr);
    ptr = ptr + 2;
    printf("%d\n", *ptr);
}