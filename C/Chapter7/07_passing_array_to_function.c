#include <stdio.h>

void printarray(int *arr, int n);

int main(void)
{
    int arr[] = {7,9,2,8,1};
    printarray(arr, sizeof(arr)/sizeof(arr[0])); // first element's address and size of the array
    return 0;
}

void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
        // arr++;
    }
}