#include<stdio.h>

int main(void)
{
    int i[13];
    int j[16];

    int *k = &i[0];
    int *l = &j[0];

    printf("%p\n",k+1);
    printf("%p\n",k-1);
    printf("%i\n",l-k);//only allowed betweeen pointers from same array
    if (k < l)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}