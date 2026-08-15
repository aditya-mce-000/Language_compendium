#include<stdio.h>

void Good_morning(void)
{
    printf("Good Morning\n");
}

void Good_Afternoon(void)
{
    printf("Good Afternoon\n");
}

void Good_Night(void)//use defined function
{
    printf("Good Night\n");//printf is a library func.
}

int main()
{
    Good_morning();
    Good_Afternoon();
    Good_Night();
    return 0;
}