#include<stdio.h>

int main(){
    int a=1 , b=0;
    printf("%d\n",a&&b);  // && is called the and operator in c
    printf("%d\n",a||b);   // || is called the or operator in c
    printf("The value of  not(a) is %d.\n",!a);  //     ! is not operator
    // if (a&&b){
    //     printf("Both are true.\n");
    // }
    // The upper conditions could also be written as... But this reduces readibility.
    // if (a){
    //     if (b){  //nested if
    //         printf("Both are true.\n");
    //     }
    //     else{
    //         printf("Both are not true.");
    //     }
    // }
    return 0;
}