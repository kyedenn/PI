#include <stdio.h>
#include <math.h>

const char *author = "Pedro Antunes";

double price (double x, int s, int xx)
{
    int amount = s + xx;
    int free_shirts = amount/3;
    if(s>0 && free_shirts > 0)
    {
        s-=(free_shirts);
    }
    else if(s == 0 && free_shirts > 0)
        {
            xx-=(xx/3);
        }
    return ((x- 0.15*x) * xx + (x- (0.15*x + 0.10*x))*s) / amount;
}

double price_free (double x, int s, int xx)
{
    int amount = s + xx;
    int free_shirts = amount/3;
    if(free_shirts>s)
    {
        xx-= (free_shirts - s);
        s = 0;
    }
    return ((x- 0.15*x) * xx)/ amount;
}

void test (void)
{
    double x;
    int s;
    int xx;
    while(scanf("%lf%d%d", &x, &s, &xx) != EOF)
    {
        int free_shirts = (s+xx)/3;
        double p;
        if(free_shirts>s)
            p = round(price_free (x, s, xx)*100)/100;
        else
            p = round(price (x, s, xx)*100)/100;
        printf("%f\n", p);
    }
}

int main (void)
{
    test();
    return 0;
}