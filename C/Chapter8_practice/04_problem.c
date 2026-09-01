#include <stdio.h>
#include <string.h>

void slice(char *st, int m, int n)
{
    char st2[13];
    int t = m-1;
    int s = strlen(st);
    // printf("%d\n", s);
    for (int i = 0; i < n-1; i++)
    {
        st2[i] = st[t];
        t++;
    }
    
    for (int i = 0; i < n; i++)
    {
        st[i] = st2[i];
    }
    st[n-m+1] = '\0';
}

int main(void)
{
    char st[1024] = "Cardiovasconeurology";

    slice(st, 7, 11);

    printf("%s", st);
    return 0;
}