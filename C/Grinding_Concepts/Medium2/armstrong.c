#include <stdio.h>
// #include<math.h>//pow function creates a floating point number which can cause problems.

int main()
{
    int a = 153;
    int d = 1;
    int n = a;
    while (n>=10)
    {
        n = n/10;
        d++;
    }
    int c = 0;
    int e = 1;
    int f = a;
    while (e<=d)
    {
        int r = f%10;
        int power = 1;
        for (int i = 1; i<=d; i++)
        {
            power *= r;
        }
        c = c + power;
        f = f/10;
        e++;
    }
    if (c==a) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}