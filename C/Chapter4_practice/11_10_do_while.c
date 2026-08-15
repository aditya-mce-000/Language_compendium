#include<stdio.h>

int main(){
    int n = 2, a = 2, is_prime = 1;
    do{
        if (n%a != 0 && n > 1){
            a++;
        }
        else{
            is_prime = 0;
            break;
        }
    } while(a<n);
    if (is_prime == 1){
        printf("n is prime");
    }
    else if (is_prime == 0){
        if (n==2){
            printf("n is prime.");
        }
        else {
            printf("n is not prime");
        }
    }
    return 0;
}