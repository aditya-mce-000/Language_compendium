#include<stdio.h>

int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d", &num);
    int placer = 1;
    int counter = 0;
    if (num == 0) counter = 1;
    while (placer<=num || placer<=(-num))
    {
        placer *= 10;
        counter ++;
    }
    printf("Digits = %d",counter);
    return 0;
}