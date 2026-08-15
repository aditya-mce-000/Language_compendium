#include<stdio.h>

int main()
{
    int num = 980;
    int initial = 1;
    while (initial <= num)
    {
        if (num%initial == 0) 
        {
            printf("%d\n",initial);
            initial++;
        }
        else
        {
            initial++;
        }
    }
    return 0;
}