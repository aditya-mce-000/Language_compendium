#include <stdio.h>

int main()
{
    int a = 123;
    float b = 12.4;
    char c = 'a';

    char* j = &c;
    printf("%p\n", &a); 
    printf("%p\n", &b); 
    printf("%p\n", &c);
    printf("%p\n", j);
    // Format specifier for printing pointer address is ‘%p’.
    return 0; //& -> address of
}