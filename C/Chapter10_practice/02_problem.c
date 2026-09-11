#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("table.txt", "w");
    
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr,"%d",4*(i+1));
        fprintf(ptr, "%c", '\n');
    }
    return 0;
}