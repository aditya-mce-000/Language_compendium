#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
}; //semicolon is important

int main(void){
    struct employee facebook[100];// array of the structure
    // we can access the data using
    facebook[0].code = 100;
    facebook[1].code = 77;
    strcpy(facebook[0].name, "Harry");

    printf("%s\n", facebook[0].name);
    printf("%d\n",facebook[1].code); 

    struct employee harry = {100, 71.22, "Harry"};
    printf("%d %f %s", harry.code, harry.salary, harry.name);// harry is a structure with the followung values
    return 0;
}