#include <stdio.h>

void print_ad(int i)
{
    printf("%p", &i);
}

int main(void)
{
    int i = 89;
    printf("%p\n", &i);
    print_ad(i);
    return 0;
}