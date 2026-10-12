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

int main(void){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    int temp1 = num;
    int larg = 0;
    int digit;
    while (temp1 > 0){
        digit = temp1 % 10;
        temp1 = temp1 / 10;
        if (digit > larg){
            larg = digit;
        }
    }
    printf("Largest number = %d\n", larg);
    int temp2 = num;
    int larg2 = 0;
    int diff = 19;
    int diff2;
    while (temp2 > 0){
        digit = temp2 % 10;
        temp2 = temp2 / 10;
        diff2 = larg - digit;
        if ((diff2 != 0) && (diff2 < diff)){
            diff = diff2;
            larg2 = digit;
        }
    }

    if (diff == 19){
        printf("No Second Largest");
    }
    else{
        printf("Second Largest number = %d\n", larg2);
    }
    return 0;
}