#include <stdio.h>

int main()
{
    int i = 1;
    int k = 2;
    int* j = &i;
    printf("%i\n", *j);//* is value at address operator
    printf("%i\n",*(&k));// * and & can each other
    return 0;
}