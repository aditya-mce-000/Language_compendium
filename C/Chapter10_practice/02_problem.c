#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Adi.txt","r");
    int num;
    f scanf(ptr,"%d", &num);

    for (int i = 1; i < 11; i++)
    {
        printf("%dX%d=%d\n", num, i, num*i);
    }
    return 0;
}