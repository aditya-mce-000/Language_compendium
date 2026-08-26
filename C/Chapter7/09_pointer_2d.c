#include <stdio.h>

int main(void)
{
    int arr[3][2] = {{1,34},{12,32},{12,90}};
    int *ptr = &arr[0][0];
    printf("%d\n", *ptr);
    ptr++;
    printf("%d\n", *ptr);
    ptr++;
    printf("%d\n", *ptr);
}