#include <stdio.h>

int main(void)
{
    int arr[] = {7,9,2,8,1};
    int *ptr_arr = arr; // arr= &arr[0]
    printf("%i\n", *ptr_arr);
    ptr_arr++;
    printf("%i\n", *ptr_arr);
    return 0;
}