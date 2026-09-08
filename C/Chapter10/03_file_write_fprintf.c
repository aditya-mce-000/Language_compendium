#include <stdio.h>

int main(void)
{
    FILE *fptr;
    // fptr = fopen("Harry.txt","w");// it first clear all the text then copies the required text in it
    fptr = fopen("Harry.txt","a");// solution is append mode
    int num = 432;
    fprintf(fptr,"%d", num);
    fclose(fptr);
    return 0;
}