#include <stdio.h>

int main(void)
{
    char st[50];
    printf("String: ");
    scanf("%s", st);

    // scanf automatically adds a null character when the enter key is pressed. 

    //  **Note** : 
    
    // 1. The string should be short enough to fit into the array. 
    // 2. scanf cannot be used to input multi-word strings with spaces. 
    
    printf("%s\n", st);
    return 0;
}