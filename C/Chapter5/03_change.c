#include<stdio.h>

int change(int a)
{
    a =77;//misnomer 
    return a;
}

int main()
{
    int b = 22;
    change(b);//value of b remains 22.beacuse only the copy of b is passed into the func
    // To run the func, only the copy or value of b is passed, not b.
    printf("b is %d", b);
    return 0;
}