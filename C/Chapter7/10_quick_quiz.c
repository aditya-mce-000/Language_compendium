#include <stdio.h>

int main(void)
{
    int arr[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("The element in row %d and column %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("The element in row %d and column %d is %d\n", i, j, arr[i][j]);
        }
    }
}