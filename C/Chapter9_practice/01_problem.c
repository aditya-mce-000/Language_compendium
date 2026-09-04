#include <stdio.h>

typedef struct vector
{
    int x;
    int y;
} Vec;

int main(){
    Vec a,b;
    a.x = 1;
    a.y = 2;

    printf("a = %dx + %dy\n",a.x, a.y);
    return 0;
}