#include<stdio.h>

int main(){
    float sum;
    printf("Please enter the principal amount : ");
    scanf("%f",&sum);
    float years;
    printf("Énter the numbet of years : ");
    scanf("%f",&years);
    float rate;
    printf("Please enter the interest rate : ");
    scanf("%f",&rate);
    float interest=(sum*years*rate)/100.0;
    printf("The simple interest calculated is : %2.f",interest);
    return 0;
}