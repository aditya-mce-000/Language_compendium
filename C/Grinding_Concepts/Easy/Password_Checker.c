#include<stdio.h>

int main(){
    int password = 7070;
    int input;
    int attempts = 3;
    int count = 1;
    while (count<=attempts){
        printf("Password is a 4 digit Number. Enter the Password: ");
        scanf("%d",&input);
        if (input!=password){
            printf("Try Again\n");
            count++;
        }
        else{
            printf("Correct Password.");
            break;
        }
    }
    printf("Ran out of attempts.\n")
    return 0;
}