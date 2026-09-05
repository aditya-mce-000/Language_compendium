#include <stdio.h>

struct complex
{
    int real;
    int complex;
};

int main()
{
    struct complex c[5];
    for (int i = 0; i < 5; i++)
    {
        printf("c[%d].real =  ", i);
        scanf("%d", &(c[i].real));
        printf("c[%d].complex =  ", i);
        scanf("%d", &(c[i].complex));
    } 

    printf("c3 = %d + %di\n",c[3].real,c[3].complex);
    return 0;
}