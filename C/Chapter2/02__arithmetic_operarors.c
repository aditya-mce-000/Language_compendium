#include<stdio.h>

int main(){
    int a;
    printf("Please enter the integer a: ");
    scanf("%d",&a);
    int b;
    printf("Please enter the integer b: ");
    scanf("%d",&b);
    int c=a+b;
    //Modulus operator(%) is used to get the remainder
    //modulus operator is useful when checking divisibilty rules.
    //modulus operator cannot be applied on float.
    //sign of the output remainder is same as that of numerator.
    printf("The value of a is %d.\nThe value of b is %d.\nTheir sum is %d.\n",a,b,c);
    printf("The value of remainder when b is divided by a is %d\n",b%a);
    //exponentian operation does not work in ^.
    //OPERATIONS BETWEEN DIFF DATA TYPES GIVE THESE RESULT.
    //BEST WOULD BE USING FLOAT DATA TYPES FOR ARITHMETIC ACCURACY.
    //int and int → int***
    //int and float → float***
    // float and float → float***
    return 0;
}