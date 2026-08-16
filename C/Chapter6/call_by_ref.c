#include <stdio.h>

int sum(int *fix, int *taken)
{
    *fix = 23; //by calling by ref we could even manipulate the value of the variable
    return (*fix) + (*taken);    
}

int main()
{
    int fix = 78;
    int taken = 5;
    printf("%i\n", sum(&fix, &taken));
    return 0;
}