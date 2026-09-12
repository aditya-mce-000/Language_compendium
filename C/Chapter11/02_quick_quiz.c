#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 5;
    float *ptr;
    ptr = (float *)malloc(n*(sizeof(float)));

    ptr[0] = 12;
    ptr[1] = 12.9;

    printf("%f\n%f", ptr[0], ptr[1]);
    return 0;
}