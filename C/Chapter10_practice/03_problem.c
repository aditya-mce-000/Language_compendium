#include <stdio.h>

int main(void)
{
    FILE *ptr = fopen("Adi.txt","r");
    FILE *ptr2 = fopen("Adi2.txt","a");

    if (ptr == NULL || ptr2 == NULL)
    {
        printf("files not found");
        return 1;
    }

    int c;
    // Data Type Bug (char vs int): c is declared as char. fgetc() returns an int so it can return all valid unsigned char values plus the negative macro EOF (typically -1). On systems where char is treated as unsigned, c == EOF will never be true, resulting in an infinite loop. Even on signed systems, a real byte matching 0xFF in a binary file could be misidentified as EOF.

    while (1)
    {
        c = fgetc(ptr);


        if (c == EOF)
        {
            break;
        }

        fputc(c,ptr2);
    }

    rewind(ptr);

    while (1)
    {
        c = fgetc(ptr);


        if (c == EOF)
        {
            break;
        }

        fputc(c,ptr2);
    }

    fclose(ptr);
    fclose(ptr2);
    return 0;
}