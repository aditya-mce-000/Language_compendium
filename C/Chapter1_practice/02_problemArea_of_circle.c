#include <stdio.h>

int main() {
    float r;
    printf("The radius is : ");
    scanf("%f",&r);
    float area=(22.0/7.0)*r*r;
    printf("The approximate area is : %f", area);
    return 0;
}