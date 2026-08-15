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
    else
    {
        printf("Wait for %d years before trying again.",18-age);
    }
    return 0;
}
