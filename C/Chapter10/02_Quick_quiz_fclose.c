#include <stdio.h>

int main(void)
{
    FILE *ptr;
    ptr = fopen("Harry2.txt","r");

    if (ptr == NULL){
        printf("file not found\n");
        return 1;
    }

    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);

    fclose(ptr);
    return 0;
}