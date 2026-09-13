#include <stdio.h>

int main(void)
{
    int x = 5 + 3 * 2;// 11printf("%d\n", x)
    printf("%d\n", x);
    x = (5 + 3) * 2;// 16
    printf("%d\n", x);
    x = 20 / 5 * 2;//8
    printf("%d\n", x);
    x = 10 > 5 && 3 < 2; // 0
    printf("%d\n", x);
    x = 10 > 5 || 3 < 2; // 1
    printf("%d\n", x);
    x = 5 + 2 > 6;// 1
    printf("%d\n", x);
    x = 5 * 2 == 10; // 1
    printf("%d\n", x);
    return 0;
}