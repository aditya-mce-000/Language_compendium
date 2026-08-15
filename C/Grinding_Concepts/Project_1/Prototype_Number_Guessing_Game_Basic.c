#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    srand(time(NULL));
    int a = 0;
    int d = (rand() % 100) + 1;//Ramdomize it
    int n = 1;
    while (a != d)
    {
        printf("Guess the number: ");
        scanf("%d",&a);
        if ((d-a) >= 10)
        {
            printf("Too less\n");
            n++;
        }
        else if(a < d)
        {
            printf("Move a bit high.\n");
            n++;
        }
        else if((a - d) >= 10)
        {
            printf("Too high\n");
            n++;
        }
        else if(a > d)
        {
            printf("Move a bit less.\n");
            n++;
        }
    }
    printf("Guessed Correectly in % d attempts.\n",n);
    return 0;
}