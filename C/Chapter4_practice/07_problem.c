#include<stdio.h>

int main(){
    int i = 1;
    int d = 0;
    while (i<=10){
        d += i*8.0;
        i=i+1;
    }
    printf("%d",d);
    return 0;
}