#include<stdio.h>

int main(){
    int a;
    printf("Enter the year to check whether it is leap year: ");
    scanf("%d",&a);
    if((a%100==0 && a%400==0)||(a%4==0 && a%100!=0)){
        printf("It is a leap year.");
    }
    else{
        printf("Not  a leap year.");
    }
    return 0;
}