#include<stdio.h>

int main(){
    int i;
    printf("Enter a natural number to check whether it is a prime: ");
    scanf("%d",&i);
    int j = 2;
    int is_prime = 1;
    while (j<i){
        if (i%j!=0){
            is_prime=1;
            j++;
        }
        else{
            is_prime = 0;
            break;
        }
    }
    if (is_prime == 0 || i==1){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}