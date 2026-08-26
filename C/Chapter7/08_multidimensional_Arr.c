#include <stdio.h>

int main(void)
{
    int dim_2[3][2] = {{1,2}
                       ,{2,3}
                       ,{2,5}};// arr[row][column]
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0 ; j < 2; j++)
        {
            printf("%d\n", dim_2[i][j]);
        }
        printf("\n");
    }
    return 0;
}