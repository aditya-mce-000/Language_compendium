#include <stdio.h>

int count_positive(int *arr, int n);

int main(void)
{
    int arr[] = {-5, 12, 3, -9, 0, 7, -2, 15};

    int count = count_positive(arr, sizeof(arr)/sizeof(arr[0]));

    printf("Number of positive integers is %d." , count);
    return 0;
}

int count_positive(int *arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
    return count;
}