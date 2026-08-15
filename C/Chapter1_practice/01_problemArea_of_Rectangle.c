#include<stdio.h>

int main() {
    float L;
    printf("The length is :  ");
    scanf("%f",&L);
    float b;
    printf("The breadth is :  ");
    scanf("%f",&b);
    float a;
    a=L*b;
    printf("The area is %f ", a);
    return 0;
}