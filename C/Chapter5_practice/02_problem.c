#include<stdio.h>

float fahrenheit(float c);

int main()
{
    float celcius = 37;
    printf("Fahrenheit temp is %.2f\n", fahrenheit(celcius));
    return 0;
}

float fahrenheit(float c)
{
    return ((9 * c)/5) + 32;
}