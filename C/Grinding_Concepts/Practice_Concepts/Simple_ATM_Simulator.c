#include<stdio.h>

int main(){
    int input; //While thsi code runs fine. The readability is not so good.
    printf("Hello User!\nEnter 1 to check balance.\nEnter 2 to deposit money.\nEnter 3 to withdraw money.\nEnter 4 to exit.\n Your Choice:--> ");
    scanf("%d",&input);
    int balance = 10000;
    int withdraw;
    int deposit;
    while (input==1 || input==2 || input==3){
        if (input == 3){
            printf("Enter the amount to withdraw: Rs ");
            scanf("%d",&withdraw);
            balance -= withdraw;
            printf("Hello User!\nEnter 1 to check balance.\nEnter 2 to deposit money.\nEnter 3 to withdraw money.\nEnter 4 to exit.\n Your Choice:--> ");
            scanf("%d",&input);
        }
        else if (input == 2){
            printf("Enter the amount to deposit: Rs ");
            scanf("%d",&deposit);
            balance += deposit;
            printf("Hello User!\nEnter 1 to check balance.\nEnter 2 to deposit money.\nEnter 3 to withdraw money.\nEnter 4 to exit.\n Your Choice:--> ");
            scanf("%d",&input);
        }
        if (input == 1){
            printf("Your Balance: Rs %d\n",balance);
            printf("Hello User!\nEnter 1 to check balance.\nEnter 2 to deposit money.\nEnter 3 to withdraw money.\nEnter 4 to exit.\n Your Choice:--> ");
            scanf("%d",&input);
        }
    }
    printf("Thanks for visiting.");
    return 0;
}