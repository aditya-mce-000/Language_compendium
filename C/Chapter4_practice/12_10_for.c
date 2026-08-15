#include<stdio.h>

int main(){
    int n = 2;
    int not_prime = 1;
    for (int i= 2; i < n; i++){
        if (n%i==0){
            not_prime = 1;
            break;
        }
    }
    if (not_prime){
        printf("%d is not prime.\n",n);
    }
    else{
        printf("%d is prime.\n",n);
    }
    return 0;
}