// PROJECT 1: NUMBER GUESSING GAME
// We will write a program that generates a random number and asks the player to guess
// it. If the player’s guess is higher than the actual number, the program displays “Lower
// number please”. Similarly, if the user’s guess is too low, the program prints “Higher
// number please”.
// When the user guesses the correct number, the program displays the number of
// guesses the player used to arrive at the number.
// Hint: Use loop & use a random number generator.
#include <stdio.h>
#include <stdlib.h>//rand() function is from stdlib library
#include <time.h>//Crucially, you also need to seed(provide a starting value to a formula that generates pseudo-random numbers.) the random number generator using srand(time(NULL)) from <time.h>. If you don't seed it, rand() will produce the exact same sequence of numbers every time you run the program.

int main() {
    // 1. Seed the random number generator with the current time
    srand(time(NULL));

    // 2. Generate a random number between 1 and 100
    // rand() % 100 gives a range of 0 to 99. Adding 1 shifts it to 1 to 100.
    int random_num = (rand() % 100) + 1;

    // 3. Print the result
    //printf("Random Number: %d\n", random_num);
    int guessed_num ;
    printf("Guess the number: ");
    scanf("%d",&guessed_num);
    int n = 1;
    while(guessed_num!=random_num){
        if (guessed_num<random_num){
            printf("Higher number please: ");
            scanf("%d",&guessed_num);
            n++;
        }
        else{
            printf("Lower number please: ");
            scanf("%d",&guessed_num);
            n++;
        }
    }
    printf("You guessed correctly in %d tries",n);
    return 0;
}