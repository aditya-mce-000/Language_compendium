#include <stdio.h>

int main(void)
{
    char str[] = "common comomonw on piuyscn sdgb";

    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'c')
        {
            printf("True");
            return 0;
        }
        i++;
    }
    printf("False");
    return 0;
}