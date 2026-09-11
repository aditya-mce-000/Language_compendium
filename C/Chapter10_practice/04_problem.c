#include <stdio.h>

int main(void)
{
    char str[50];
    printf("Name, salary: ");
    gets(str);

    char str2[50];
    printf("Name, salary: ");
    gets(str2);

    FILE *ptr = fopen("Adi2.txt","a");

    fprintf(ptr,"%s",str);
    

    fprintf(ptr,"%s",str2);

    fclose(ptr);
    return 0;
}