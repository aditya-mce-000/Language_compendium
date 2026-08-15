#include<stdio.h>

int main(){
    for (int i=0; i<13; i++)
    {
        if (i%2==0){
            // break;//This means Exit the loop now! 
            continue;//skip this iteration now//6 is skipped
        }
        printf("i is %d\n",i);
    }
    printf("For Loop is done.");
    return 0;
}