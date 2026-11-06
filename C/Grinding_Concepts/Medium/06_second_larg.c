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

#include<stdio.h>

int max_digit(int n){
    int max = 0;
    // int temp = n;
    while (n > 0){
        int x = n % 10;
        n = n / 10;
        if (x > max){
            max = x;
        }
    } 
    return max;
}

int sec_digit(int n){
    int sec_max = -1;
    int max = max_digit(n);
    while (n > 0){
        int x = n % 10;
        n = n / 10;
        if (x > sec_max && x != max){
            sec_max = x;
        }   
    }
    if (sec_max == max || sec_max == -1){
        return 100;
    }
    else{
        return sec_max;
    }
}

int main(void)
{
    int num;
    printf("Number: ");
    scanf("%d",&num);
    int sec = sec_digit(num);
    if (sec == 100){
        printf("No sec larg");
    }
    else{
        printf("%d", sec);
    }
    return 0;
}