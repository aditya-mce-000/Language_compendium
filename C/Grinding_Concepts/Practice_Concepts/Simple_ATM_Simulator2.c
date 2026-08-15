#include<stdio.h>

int main(){
    int balance = 10000;
    int deposit;
    int withdraw;
    int input;
    do{
        printf("Hello User!\nEnter 1 to check balance.\nEnter 2 to deposit money.\nEnter 3 to withdraw money.\nEnter 4 to exit.\n Your Choice:--> ");
        scanf("%d",&input);
        switch(input){
            case 1:
            printf("Your Balance: Rs %d\n",balance);
            break;
            case 2:
            printf("Enter deposit amount: Rs");
            scanf("%d",&deposit);
            balance += deposit;
            break;
            case 3:
            printf("Enter withdraw amount: Rs ");
            scanf("%d",&withdraw);
            balance -= withdraw;
            break;
            case 4:
            break;
            default:
            printf("Invalid Option. Try Again.\n");
            break;
        }
    } while(input!=4);
    printf("Thanks for visiting.");
    return 0;
}