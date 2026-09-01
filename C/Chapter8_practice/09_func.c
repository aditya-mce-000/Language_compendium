#include <stdio.h>
#include <stdbool.h>

bool contains_char(const char *str, char target)
{
    while (*str != '\0')
    {
        if (*str == target)
        {
            return true; // Found immediately
        }
        str++;
    }
    return false; // Traversed entire string without match
}

int main(void)
{
    char str[] = "common comomonw on piuyscn sdgb";

    if (contains_char(str, 'p'))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}