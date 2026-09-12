#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int player, computer;

    srand(time(0));
    computer = rand() % 3;
    /*
    0 --> Snake
    1 --> Water
    2 --> Gun
    */

    printf("Choose 0 for snake, Choose 1 for Water and choose 2 for Gun: ");
    scanf("%d", &player);
    printf("Computer chooses %d\n", computer);

    if ((player - computer) == 1 || (computer - player) == 2)
    {
        printf("Computer wins.");
    }
    else if ((computer - player) == 1 || (player - computer) == 2)
    {
        printf("Player wins");
    }
    else
    {
        printf("Draw");
    }
    return 0;
}