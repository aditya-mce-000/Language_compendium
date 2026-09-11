#include <stdio.h>

int main(void)
{
    FILE *ptr = fopen("Adi2.txt","r");

    int a;
    fscanf(ptr, "%d", &a);

    int b = 2*a;

    fclose(ptr);

    ptr = fopen("Adi2.txt","a");

    fprintf(ptr,"\n%d", b);

    fclose(ptr);
    return 0;
}