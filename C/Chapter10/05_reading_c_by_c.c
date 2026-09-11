#include <stdio.h>

int main(void)
{
    char ch;
    FILE *ptr;
    ptr = fopen("harry.txt","r");
    while (1)
    {
        ch = fgetc(ptr);
        printf("%c",ch);
        
        if (ch == EOF)// End of file
        {
            break;
        }
    }
    fclose(ptr);
    return 0;
}