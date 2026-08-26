#include <stdio.h>

int main(void)
{
    int arr[2][3][4] = {{{2,3,5,7},{1,4,7,9},{0,1,8,3}},{{6,31,78,15},{12,5,56,14},{12,45,64,9}}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        } 
        printf("\n");
    }
    return 0;
}