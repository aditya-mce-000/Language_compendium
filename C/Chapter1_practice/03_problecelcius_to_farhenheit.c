#include<stdio.h>

int main(){
    float celsius;
    printf("Please enter the celsius temperatue to get the corresponding fahrenheit temp : ");
    scanf("%f",&celsius);
    float fahrenheit=((9.0*celsius)/5.0)+32;
    printf("The corresponding fahrenheit temp is : %.1f",fahrenheit);  //imp thing-- .1 or .2 is used to limit the no of decimals after the integer.
    return 0;
}