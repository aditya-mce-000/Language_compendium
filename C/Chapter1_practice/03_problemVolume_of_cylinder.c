#include <stdio.h>

int main() {
    float r;
    printf("The radius is : ");
    scanf("%f",&r);
    float h;
    printf("The height of cylinder is : ");
    scanf("%f",&h);
    float volume=(22.0/7.0)*r*r*h;
    printf("The approximate volume is : %f", volume);
    return 0;
}