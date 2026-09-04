#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main(void)
{
    struct employee e1;
    e1.code = 56;
    struct employee *ptr;// pointer to struct employee particularly
    ptr = &e1;
    // now we can print structure element using dereferencing:
    printf("%d", (*ptr).code);  
    return 0;
}