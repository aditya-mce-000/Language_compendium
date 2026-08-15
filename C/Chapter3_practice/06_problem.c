#include<stdio.h>

int main()
{
    float a,b,c,d;
    printf("Enter 1st number: ");
    scanf("%f",&a);
    printf("Enter 2nd number: ");
    scanf("%f",&b);
    printf("Enter 3rd number: ");
    scanf("%f",&c);
    printf("Enter 4th number: ");
    scanf("%f",&d);
    if (a>=b && a>=c && a>=d){printf("1st is the greatest");}
    else if (b>=c && b>=d){printf("2nd is greatest");}
    else if (c>=d){printf("3rd is greatest");}
    else{printf("4th is greatest.");}
    return 0;
}