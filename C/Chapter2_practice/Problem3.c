#include<stdio.h>

int main(){
    int a;
    printf("Enter the number to check its divisibility by 97:  ");
    scanf("%d",&a);
    printf("If a number is divisible by another number, the remainder will be 0. The remainder of  number when divided by 97 is %d",a%97);
    return 0;
}