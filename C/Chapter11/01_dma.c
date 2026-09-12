#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int *ptr;
    scanf("%d", &n);// malloc has garbage value for all pointers
    ptr = (int *)malloc(n*sizeof(int)); // Malloc return a null pointer
    // int arr[n]; // Not allowed in c// so we conver to int * pointer
    // C is a low level language bcause it lets us play with low level memory or the hardware.
    ptr[0] = 3;
    ptr[1] = 4;
    printf("%d %d\n", ptr[0], ptr[1]);// we could use like a normal array
    free(ptr);
    return 0;
} 