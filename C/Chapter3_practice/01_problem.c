#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//The answer is 'I am 11' bacuse a=11 is assignment operator
int main(){
    srand(time(NULL));
    int a = (rand()%100)+1; // Random Num Gnerator
    if (a == 11) printf("a is 11"); //Also a way to write if else
    else  printf("a is not 11. a is %d", a);
    return 0;
}