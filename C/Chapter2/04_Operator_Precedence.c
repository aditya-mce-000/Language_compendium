#include<stdio.h>

int main(){
    //BODMAS does not imply in c programming language.
    //Operator precedence and associativity is important in theis case.
    //*/% is used as 1st priority. +- is used as 2nd priority. = is used as last.
    //3*x-4*y is equal to 3x-4y
    // Use parenthesis. Don't rely too much on precedence.
    int a=8/4*3;//variable declaration is important. While working on a programming language, keep it in mind
    printf("%d",a);// when precedence order is same then first come , first serve
    return 0;
}