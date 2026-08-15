// a pointer is a variable which stores the address of another variable.

#include <stdio.h>

int main()
{
    int a = 123;
    float b = 12.4;
    char c = 'a';
    printf("%p\n", &a); printf("%p\n", &b); printf("%p\n", &c);
    return 0;
}