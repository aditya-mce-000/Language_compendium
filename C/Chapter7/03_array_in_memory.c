#include <stdio.h>

int main(void)
{
    int arr[3] = {1,2,3};// this wiil reserve 4*3 bytes in memory = 12 bytes of memory
    for (int i = 0; i < 3; i++)
    {
        printf("%p\n", &arr[i]);
    }
    return 0;
}