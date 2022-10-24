#include <stdio.h>

const char *author = "Pedro Antunes";

int days (int x)
{
   return x <= 7 ? x : days (x-7);
}

int tables (int x)
{
    int w;
    if(x == 0)
        w = 0;
    else
        w = (x * 4) + 2;
    return w;
}

/*int tables (int y)
{
    return y == 0 ? 0 : (y * 4) + 2;
}*/

void test (void)
{
    int o;
    int x;
    while(scanf("%d%d", &o, &x) != EOF)
    {
        if(o == 1)
        {
            if(x > 0)
            {
                int d = days(x);
                printf("%d\n", d);
            }
        }
        else if(o == 2)
            {
                int t = tables(x);
                printf("%d\n", t);
            }
    }
}

int main (void)
{
    test();
    return 0;
}