#include<stdio.h>

int main(){
    int a;
    printf("Enter your annual income to calculate the tax in rs: ");
    scanf("%d",&a);
    if (a<=250000){
        printf("No tax");
    }
    else if(250000<a && a<=500000){//and operator
        printf("%f",(5.0/100.0)*a);
    }
    else if(500000<a && a<=1000000){
        printf("%f",(20.0/100.0)*a);
    }
    else{
        printf("%f",(30.0/100.0)*a);
    }
    return 0;
}