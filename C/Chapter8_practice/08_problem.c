#include <stdio.h>

int main(void)
{
    char str[] = "sjhdfuhgdvkjhdkfbegfuireuk frielhfurviluhrevcjres ngkjlrhgtuohrognr jkbgopreh";

    int i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'v')
        {
            count++;
        }
        i++;
    }
    printf("The occurences of v in the str is %d times.", count);
    return 0;
}