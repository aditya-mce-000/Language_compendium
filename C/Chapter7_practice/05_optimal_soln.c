#include <stdio.h>

void reverse(int *arr, int size);

int main(void)
{
    int nums[] = {1, 2, 4, 7, 9, 0};
    int n = sizeof(nums) / sizeof(nums[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    reverse(nums, n);

    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}

// Reverses the array in-place using pointer arithmetic
void reverse(int *arr, int size)
{
    int *left = arr;
    int *right = arr + size - 1;

    while (left < right)
    {
        int temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}