#include <stdio.h>

typedef struct v
{
    int i;
    int j;
} vector;

vector sumVector(vector v1, vector v2)
{
    vector v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}

int main(void)
{
    vector v1 = {2, 3};
    vector v2 = {2, 8};
    vector v3 = sumVector(v1, v2);

    printf("The value of v3 is %di+%dj\n",v3.i,v3.j);
    return 0;
}