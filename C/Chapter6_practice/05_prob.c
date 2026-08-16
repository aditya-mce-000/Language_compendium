#include <stdio.h>

void sum(int *a, int *b)
{
    printf("%i\n", (*a) + (*b));
}

void average(int *a, int *b)
{
    printf("%.2f\n", ((*a) + (*b))/2.0);
}

int main(void)
{
    int num_1 = 98;
    int num_2 = 12;

    sum(&num_1, &num_2);
    average(&num_1, &num_2);
}