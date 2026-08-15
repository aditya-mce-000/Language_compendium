#include<stdio.h>

int main(){
    int a=2;
    float b=9;// 9 is promoted to 9.0
    float c=b/a;
    int d=6.7;//6.7 is demoted nto 6
    printf("The value of a/b is %f\n",c);
    printf("The value of d is %d\n",d);
    return 0;
}