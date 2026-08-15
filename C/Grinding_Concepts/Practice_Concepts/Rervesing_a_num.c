#include<stdio.h>

void printable(int num);

int main()
{
    int num;
    printf("Enter the integer to get its reverse: ");
    scanf("%d", &num);
    if (num<0)
    {
        num = -num;
        printf("-");
    }
    if (num == 0)
    {
        printf("%d",0);
    }
    printable(num);
    return 0;
}
 
void printable(int num)
{
    int printable;
    while (num > 0)
    {
        printable = num % 10;
        num = num / 10;
        printf("%d",printable);
    }
}