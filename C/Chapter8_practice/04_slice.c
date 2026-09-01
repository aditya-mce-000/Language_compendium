#include <stdio.h>

void slice(char *st, int m, int n)
{
    int i;
    int start = m - 1; // Convert 1-based start position to 0-based array index
    
    // Shift elements from index 'm-1' down to the beginning of the string
    for (i = 0; i <= (n - m); i++)
    {
        st[i] = st[start + i];
    }
    
    // Null-terminate immediately after the sliced characters
    st[i] = '\0';
}

int main(void)
{
    char string[] = "Cardiovasconeurology";

    // Slice from 12th character to 20th character (1-based: 'a' to 'n')
    slice(string, 12, 20);

    printf("Sliced string: %s\n", string); // Output: ascon
    return 0;
}