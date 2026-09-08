#include <stdio.h>

int main(void)
{
    FILE *ptr;
    ptr = fopen("Harry.txt","r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);

    fclose(ptr);

    return 0;
}