#include <stdio.h>

// typedef char* string;

int main(void)
{
    char a[] = "Hello";
    printf("%s\n", a);  // %s is the format specifier for string ehich takes the address of first charcter of the string as input and prints it till the nul character '\0' comes.
    
    for (int i = 0; a[i] != '\0'; i++)
    {
        printf("At Address %p resides %c\n", &a[i], a[i]);
    }
    return 0;
}