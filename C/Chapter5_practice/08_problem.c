// Write a program using function to print the following pattern (first n lines) 
// * 
// * *
// * * *
// * * * * 
// * * * * *

#include <stdio.h>

void star(int height);

int main()
{
    int height;
    printf("Height: ");
    scanf("%i", &height);
    star(height);
    return 0;
}

void star(int height)
{
    if (height <= 0)
    {
        return;
    }

    star(height - 1);

    for (int i = 0; i < height; i++)
    {
        printf("#");
    }
    printf("\n");
}
// {
//     for (int i = 0; i < height; i++)
//     {
//         for (int j = 0; j < i+1; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }