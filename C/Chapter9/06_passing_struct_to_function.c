// A structure can be passed into a function just like any other data type

#include <stdio.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

void show(struct employee e); // function prototype 

int main(){
    struct employee e1;
    e1.code = 98;

    show(e1);
    return 0;
}

void show(struct employee e)
{
    printf("%d\n", e.code);
}