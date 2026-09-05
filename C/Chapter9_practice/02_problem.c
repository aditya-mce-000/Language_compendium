#include <stdio.h>

typedef struct vector
{
    int x;
    int y;
} v;

void sumVector(v v1, v v2, v *v3);

int main(void)
{
    v v1,v2;
    v1.x = 3;
    v1.y = 2;
    v2.x = 7;
    v2.y = 9;

    v v3; 
    sumVector(v1, v2, &v3);

    printf("v3 = %dx + %dy", v3.x, v3.y);
    return 0;
}

void sumVector(v v1, v v2, v *v3)// we must use ppointer here because changing the value of a variable is not possible in function because only it's copy iis being passed
{
    (*v3).x = v1.x + v2.x;// v3->x 
    (*v3).y = v1.y + v2.y;//v3->y
}