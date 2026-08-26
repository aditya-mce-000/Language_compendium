#include <stdio.h>

void reverse(int *address, int n);

int main(void)
{
    int num[] = {1,2,4,7,9,0};

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", num[i]);
    }

    printf("\n");

    reverse(num, sizeof(num)/sizeof(num[0]));

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", num[i]);
    }
    return 0;
}

void reverse(int *address, int n)
{
    int *temp = address;
    int a[1024];
    for (int i = 0; i < n; i++)
    {
        a[i] = *(temp);
        temp++;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        *address = a[i];
        address++;
    }
}