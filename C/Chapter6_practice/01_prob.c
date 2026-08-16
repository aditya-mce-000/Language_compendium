#include <stdio.h>

int main(void)
{
    int j = 987;
    printf("%p\n", &j);
    printf("%i\n", *(&j));
    return 0;
}