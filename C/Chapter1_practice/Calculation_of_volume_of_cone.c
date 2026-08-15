#include<stdio.h>

int main(){
    int a;
    printf("Enter the radius of the base: ");
    scanf("%d",&a);
    int b;
    printf("Enter the height of the cone: ");
    scanf("%d",&b);
    float v=(1.0/3.0)*(22.0/7.0)*a*a*b;
    printf("The required volume is : %1.f",v);
    return 0;
}