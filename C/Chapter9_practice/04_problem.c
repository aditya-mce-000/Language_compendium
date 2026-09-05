#include <stdio.h>

typedef struct marks
{
    int eng;
    int math;
    int science;
} mark;

void change(mark *shreya);

int main()
{
    mark adi, shreya;
    adi.eng = 23;
    shreya.eng = 32;

    change(&shreya);

    printf("%d\n", shreya.eng);
    return 0;
}

void change(mark *shreya)
{
    // (*shreya).eng = 29;
    shreya->eng = 29;// arrow operator
}