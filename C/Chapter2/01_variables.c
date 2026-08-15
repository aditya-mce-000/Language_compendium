#include<stdio.h>

int main() {
    //variable is simply the name of memory location.
    int i=10;
    i=1;// we could change the value of variable but we can not change its data type.
    int j=i;
    int a=2, b=3, c=3;
    int d=a+b-c;// we could do operations using previously defined variables
    printf("The value of i is %d and the value of j is %d\n",i,j);
    printf("The value of b is %d and the value of c is %d\n",b,c);  // it is backslash
    printf("The value of a is %d and the value of d is %d\n",a,d);
    //%d is called format specifier
    //%d is used for int , %f is used for float and % c is used for char(single character)
    return 0;
}