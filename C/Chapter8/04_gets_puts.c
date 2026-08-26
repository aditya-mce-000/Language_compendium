#include <stdio.h>

int main(void)
{
    char st[50];
    printf("String: ");
    gets(st); 
    // The entered string is stored in st! 

    printf("String: ");
    printf("%s\n", st);
    
    printf("String: ");
    puts(st); // Prints the string & places the cursor on the next line
    
    return 0;
}