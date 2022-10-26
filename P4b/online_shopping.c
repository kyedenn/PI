#include <stdio.h>
#include <math.h>

const char *author = "Pedro Antunes";

double price (double x, int s, int xx)
{
    int amount = s + xx;
    if(s!=0 && amount >= 1)
        s-=(amount/3);
    else if(s == 0 && amount >= 1)
            xx-=(xx/3);
    return ((x- 0.15*x) * xx + (x- (0.15*x + 0.10*x))*s) / amount;
}

void test (void)
{
    double x;
    int s;
    int xx;
    while(scanf("%lf%d%d", &x, &s, &xx) != EOF)
    {
        double p = round(price (x, s, xx)*100)/100;
        printf("%f\n", p);
    }
}

int main (void)
{
    test();
    return 0;
}