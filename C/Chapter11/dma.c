#include <stdio.h>

int main(void)
{
    int n;
    int *ptr;
    scanf("%d", &n);
    ptr = (int *)malloc(n*sizeof(int)); 
    // int arr[n]; // Not allowed in c
    return 0;
}