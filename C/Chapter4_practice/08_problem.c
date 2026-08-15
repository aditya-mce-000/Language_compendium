#include<stdio.h>

int main(){
    int i = 1;
    int d;
    printf("Enter the postive integer to get the factorial: ");
    scanf("%d",&d);
    // int z = 1;
    // unsigned long long z = 1;//Expanded storage capacity//until 20!
    double z = 1.0;//until 170!
    while (i <= d){
        z *= i ;
        i++;
    }
    // printf("%d\n",z);
    // printf("%llu\n",z);
    printf("%.0f\n",z);
    return 0;
}