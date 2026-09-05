#include <stdio.h>
#include <string.h>

typedef struct bank
{
    char name[10];
    int money;
} account;

int main(void)
{
    account adi, aparna;
    strcpy(adi.name, "Aditya");
    adi.money = 153;
    strcpy(aparna.name, "Aparna");
    aparna.money = 123454;

    printf("Name::%s:Rs %d",adi.name, adi.money);
    return 0;
}