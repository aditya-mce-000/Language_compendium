#include<stdio.h>

float gravity(float mass);

int main()
{
    float mass = 10;
    printf("Gravity on the body is %.2f N.", gravity(mass));
    return 0;
}

float gravity(float mass)
{
    return 9.8 * mass; 
}