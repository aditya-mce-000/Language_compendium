#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter and integer: ");scanf("%d", &N);

    //Sign
    if (N < 0)
    {
        printf("Sign: Negative\n");
    }
    else if (N == 0)
    {
        printf("Zero\n");
    }
    else
    {
        printf("Sign: Positive\n");
    }

    // odd even
    if (N % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }

    // divisible by 3
    if (N % 3 == 0)
    {
        printf("Divsible by 3: Yes\n");
    }
    else
    {
        printf("Divsible by 3: No\n");
    }

    // divisible by 5
    if (N % 5 == 0)
    {
        printf("Divsible by 5: Yes\n");
    }
    else
    {
        printf("Divsible by 5: No\n");
    }
    return 0;
}