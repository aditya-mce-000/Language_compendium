#include<stdio.h>

int main(){
    int i;
    printf("Enter a natural number: ");
    scanf("%d",&i);
    int a = 1;
    do{
        printf("%d\n",a);
        a++;
    } while(a<=i);
    return 0;
}