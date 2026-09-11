#include <stdio.h>

int main(void)
{
    FILE *ptr;
    ptr = fopen("harry.txt","w");

    // char c = fgetc(ptr);
    // printf("%c\n",c);

    fputc('a',ptr);
    fclose(ptr);
    return 0;
}