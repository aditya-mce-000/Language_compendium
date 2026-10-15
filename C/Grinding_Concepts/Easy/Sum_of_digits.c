#include<stdio.h>

int main(){
    int user_num;
    do{
        printf("Enter a num less than 10000 to get sum of digits: ");
        scanf("%d",&user_num);
    } while(user_num > 10000 || user_num < 0);
    int j;
    if(user_num<10000&&user_num>=1000){
        j=1000;
    }
    else if(user_num<1000&&user_num>=100){
        j=100;//break it into a loop instead of hardcoding
    }
    else if(user_num<100&&user_num>=10){
        j=10;
    }
    else{
        j=1;
    }
    int sum;
    while (j>=1){
        int quo = user_num / j;
        user_num -= quo*j;
        j/=10;
        sum+=quo;
    }
    printf("%d",sum);
    return 0;
}

