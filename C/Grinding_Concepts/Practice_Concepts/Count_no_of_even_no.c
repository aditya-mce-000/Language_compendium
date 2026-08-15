#include<stdio.h>

int main(){
    int num_to_check;
    printf("Enter a number to check how many positive even no exist till it: ");
    scanf("%d",&num_to_check);
    int initial =0;
    int first =2;//simply use maths
    while (first<=num_to_check){
        first += 2;
        initial++;
    }
    printf("%d",initial);
    return 0;
}