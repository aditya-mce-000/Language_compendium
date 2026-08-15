#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    // in the else if ladder, only one of them runs.
    if (age>60)
    {
        printf("You can drive and you are senior citizen!");
    }
    else if (age>40)
    {
        printf("You can drive and you are elder!");
    }
    else if (age>18)
    {
        printf("You can drive!");
    }
    else//This is optional. It only runs only if all conditions fail.
    {
        printf("Wait for %d years before trying again", 18-age);
    }
    return 0;
}