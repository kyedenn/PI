#include <stdio.h>
#include <math.h>

const char *author = "Pedro Antunes";

int conversion (int x)
{
    return x>=100 ? conversion (x/10) * 10 : x;
}

void test (void)
{
    int x;
    while(scanf("%d", &x) != EOF)
    {
        int c = conversion(x);
        printf("%d\n", c);
    }
}

int main (void)
{
    test();
    return 0;
}