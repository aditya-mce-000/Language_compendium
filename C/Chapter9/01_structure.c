#include <stdio.h>
#include <string.h>

struct employee
{
    int code;// this declares a new user defined data type 
    float salary;
    char name[10];
};

int main(void)
{
    struct employee e[2];
    e[1].code = 4511;
    strcpy(e[1].name, "Harry");
    e[1].salary = 54.44;

    printf("%d\n%f\n%s\n",e[1].code, e[1].salary, e[1].name);
    return 0;
}