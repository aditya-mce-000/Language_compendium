#include<stdio.h>

int main(){
    int i = 1;
    int a = 0;
    while (i <= 10){
        a += i;
        i++;
    }
    printf("%d",a);
    return 0;
}