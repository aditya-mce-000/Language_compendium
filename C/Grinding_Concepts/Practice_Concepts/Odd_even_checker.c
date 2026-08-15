#include<stdio.h>

int main(){
    int num_to_check;
    printf("Enter a number to check whether it is even or odd: ");
    scanf("%d",&num_to_check);
    // if (num_to_check%2 == 0){
    if ((num_to_check & 1)==0){  //Checking the least significant bit
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}