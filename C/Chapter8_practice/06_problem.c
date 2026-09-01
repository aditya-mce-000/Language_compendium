#include <stdio.h>

int main(void)
{
    char str[] = "Good Morning";
    printf("%s\n", str);
    int i = 0;
    while (str[i] != '\0')
    {
        str[i]++;
        i++;
    }

    printf("%s\n", str);
    return 0;
}