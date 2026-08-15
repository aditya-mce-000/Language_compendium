#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter Physics Marks out of 100: ");
    scanf("%d",&a);
    printf("Enter Chemistry Marks out of 100: ");
    scanf("%d",&b);
    printf("Enter Maths Marks out of 100: ");
    scanf("%d",&c);
    int d=((a+b+c)/300.0)*100;
    if (d>=40 && a>=33 && b>=33 && c>=33) //  && is and opeartor that checks all condition.
    {
        printf("Pass"); 
    }
    else{
        printf("Fail");
    }
    return 0;
}