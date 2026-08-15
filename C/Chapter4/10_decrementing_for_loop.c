#include<stdio.h>

int main(){
    for (int i=6; i; i--){ //this runs until i becomes zero and then stops since int 0 is a false value
        printf("%d\n",i);
    }
    return 0;
}