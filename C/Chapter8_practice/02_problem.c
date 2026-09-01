#include <stdio.h>

int main(void)
{
    char str[] = "Rohan";

    printf("s: ");
    printf("%s\n", str);

    printf("c: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}