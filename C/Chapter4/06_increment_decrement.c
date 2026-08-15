#include<stdio.h>

int main(){
    int i=5;
    printf("The value of i is %d\n",i);
    i++;//i=i+1
    printf("The value of i is %d\n",i);
    i=i+5;
    printf("The value of i is %d\n",i);
    ++i;//i=i+1
    printf("The value of i is %d\n",i);
    i+=4;//i=i+4  //  *=  /=  -=  +=
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",i++);//i++ first prints then increments.(Post increment operator)
    printf("The value of i id %d\n",i);
    printf("The value of i is %d\n",++i);//++i first increments then prints.(Pre increment operator)
    i--;//i=i-1
    printf("The value of i is %d\n",i--);//decrement operator
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",--i);
    int age=18;
    printf("%p",&ageg);
    return 0;
}