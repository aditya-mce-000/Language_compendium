#include<stdio.h>

int main(){
    int num;
    printf("Enter a number to get its table: ");
    scanf("%d",&num);
    int count = 1;
    // for (int count = 1; count <= 10; count++){} for loop is generally better in such cases
    while (count<=10){
        printf("%d X %d = %d\n", num, count, num*count);
        count++;
    }
    return 0;
}