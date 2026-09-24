// 6. SECOND LARGEST DIGIT
// -----------------------
// Input a positive integer.

// Example:
//     Input: 58321
//     Output: Second largest digit = 5

// Example:
//     Input: 9988
//     Output: Second largest distinct digit = 8

// If there is no second-largest distinct digit, print:
//     No second-largest distinct digit

#include <stdio.h>

int main(void)
{
    int dig[123];
    int n;
    printf("Input: ");
    scanf("%d", &n);
    int temp = n;
    int count = 0;
    int i = 0;
    do
    {
        count++;
        dig[i] = temp % 10;
        temp = temp / 10;
        i++;
        count++;
    } while (temp > 0);

    
    printf("The second largest digit of the ")
    return 0;
}