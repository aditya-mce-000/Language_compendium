#include <stdio.h>

int main(void)
{
    FILE *ptr;
    ptr = fopen("harry.txt","r");

    char c = fgetc(ptr);
    printf("%c\n",c);

    // fputc('c',ptr);
    return 0;

}