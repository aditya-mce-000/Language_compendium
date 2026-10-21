#include<stdio.h>

int main(void)
{
    int w;
    printf("w: ");
    scanf("%d", &w);
    if (w % 2 == 0 && w != 2){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}