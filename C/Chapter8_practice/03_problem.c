#include <stdio.h>

int my_strlen(char *str);

int main(void)
{
    char str[] = "Rohan";
    printf("%d", my_strlen(str));
}

int my_strlen(char *str)
{
   int count = 0;

    while (str[count] != '\0')
    {
        count++;
    }

    return count; 
}