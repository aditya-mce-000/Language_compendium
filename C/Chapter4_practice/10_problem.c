#include<stdio.h>

int main(){
    int i = 53;
    int a = 2;
    while (i>a){
        if (i%a != 0){
            a++;
        }
        else {
            printf("Not ");// 😂😂😂😂😂
            break;
        }
    }
    printf("Prime");
    return 0;
}