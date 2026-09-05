#include <stdio.h>

typedef struct complex
{
    int real;
    int complex;
} comp;

int main()
{
    comp c1,c2;
    c1.real = 9;
    c2.real = 7;
    c1.complex = 12;
    c2.complex = 8;

    printf("c1 = %d + %di\n", c1.real, c1.complex);
    printf("c2 = %d + %di\n", c2.real, c2.complex);
    return 0;
}