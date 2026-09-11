#include <stdio.h>

int main(void)
{
    FILE *ptr;
    ptr = fopen("Adi.txt","r");
    int count = 0;
    int num;
    while (count < 3)
    {
        fscanf(ptr,"%d", &num);
        count++;
        printf("%d\n", num);
    }
    fclose(ptr);
    return 0;
}