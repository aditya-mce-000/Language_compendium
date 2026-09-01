#include <stdio.h>

void my_strcpy(char *str2, char *str1, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        str2[i] = str1[i];
    }
    // str2[i] = '\0';
}

int main(void)
{
    char str1[] = "Harry";
    printf("%s\n", str1);

    char str2[10];
    my_strcpy(str2, str1, sizeof(str1)/sizeof(str1[0]));

    printf("%s\n", str2);
}