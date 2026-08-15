#include<stdio.h>

int main(){
    int i=0;
    while(i<10){//when i becomes 10, the loop terminates**. Terminology is important when dealing with clients.
        printf("The value of i is %d\n",i);
        i++;
    }
    return 0;
}