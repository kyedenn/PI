#include <stdio.h>

const char *author = "Pedro Antunes";

int ints_get(int *a)

{
    int result = 0;
    int x;
    while (scanf("%d", &x) != EOF)
        a[result++] = x;
    return result;
}

void invert (int *a, int n)
{
    int c = n;
    for(int i = n-1; i >= 0; i--)
    {
        if(i < c)
        {
            printf("%d\n", a[i]);
        }
    }
}

void test(void)
{
    int a[20];
    int n = ints_get(a);
    invert(a, n);
}

int main (void)
{
    test();
    return 0;
}