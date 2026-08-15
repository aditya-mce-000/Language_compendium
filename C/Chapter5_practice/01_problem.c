#include<stdio.h>

float average(float a , float b , float c);

int main()
{
    float a = 9;
    float b = 12;
    float c = 18;
    printf("Average of a, b, c is %f", average(a, b, c));
    return 0;
}

float average(float a , float b , float c)
{
    return (a + b + c)/3;
}