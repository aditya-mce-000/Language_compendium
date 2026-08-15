#include<stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age>18)
    {
        printf("Checking your age...\n");
        printf("You are of legal age.\n");
    }
    if (age%5==0)
    {
        printf("Winner! Congrats! Your age is a multiple of 5.\n");
    }
    return 0;
}
