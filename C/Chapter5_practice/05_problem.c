//4 5 5

#include<stdio.h>

int main()
{
    int a = 4; 
    printf("%d %d %d \n", a, ++a, a++);
    //compiler evaluation order - left to right- 4 5 5
    //compiler evaluation order - right to left- 6 6 4
    return 0;
}