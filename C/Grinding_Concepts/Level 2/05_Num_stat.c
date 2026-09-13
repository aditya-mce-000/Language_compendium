// Input a positive integer.

// Example:
//     Input: 58321

// Output:
//     Digits: 5
//     Sum: 19
//     Product: 240
//     Largest digit: 8
//     Smallest digit: 1
//     Even digits: 2
//     Odd digits: 3

// Do not convert the number into a string.

#include <stdio.h>

int main(void)
{
    int int1;
    printf("Enter the int: ");
    if (scanf("%d", &int1) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int dig = 0;
    int sum = 0;
    int prod = 1;
    int larg = 0;
    int smal = 9;
    int even = 0;
    int odd = 0;
    int count = 0;
    int num = int1;

    do{
        dig = num % 10;
        num = num / 10;
        count++;
        sum += dig;
        prod *= dig;
        if (dig > larg)
        {
            larg = dig;
        }
        if (dig < smal)
        {
            smal = dig;
        }
        if (dig % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    } while (num > 0);

    printf("Count: %d\n", count);
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", prod);
    printf("Largest Digit: %d\n", larg);
    printf("Smallest Digit: %d\n", smal);
    printf("Even Digits: %d\n", even);
    printf("Odd Digits: %d\n", odd);
    return 0;
}