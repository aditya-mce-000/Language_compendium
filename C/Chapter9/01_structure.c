#include <stdio.h>
#include <string.h>

struct employee // outside main function
{
    int code;// this declares a new user defined data type 
    float salary;
    char name[10];
};

int main(void)
{
    struct employee e1, e2;
    e1.code = 4511;
    strcpy(e1.name, "Harry");
    e1.salary = 54.44;

    printf("%d\n%f\n%s\n",e1.code, e1.salary, e1.name);
    return 0;
}