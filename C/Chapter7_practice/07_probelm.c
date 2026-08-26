#include <stdio.h>

int main(void)
{
    int arr[3][10];
    int num[] = {2,7,9};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = num[i] * (j + 1);
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d\n", arr[i][j]);
        }
        printf("\n");
    }
}