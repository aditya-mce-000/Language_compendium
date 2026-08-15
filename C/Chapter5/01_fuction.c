#include<stdio.h>

//return : name(input) 
// void sum(int sum){//defining a function sum which takes an intger as a input and gives the printable statment
//     printf("Sum is: %d",sum);
// }
int num_1();//func protype to tell C that we are going to define this func and then we could define the func after main too

int num_2();//func proto

int sum(int x, int y);//func def

int main(){//this is also a function and main is the entry point func of c
    int a = num_1();//func call
    int b = num_2();//func call
    sum(a, b);//func call
    return 0;
}




























int num_1()
{
    int a;
    printf("Enter num_1: ");
    scanf("%d",&a);
    return a;
}

int num_2()//func def
{
    int b;
    printf("Enter num_2: ");
    scanf("%d",&b);
    return b;//5:00:00
}

int sum(int x, int y)//func def
{
    printf("Sum: %d\n",x+y);//four  spaces before writing command
    return x+y;
}