#include <stdio.h>
#include <math.h>

const char *author = "Pedro Antunes";

double bi_hourly (double day, double night)
{
    double priceday = 0.26120 * (day + day * 0.25);
    double pricenight = 0.20620 * (night + night * 0.25);
    const double pot = 18.551;
    return (priceday + pricenight + pot) + (priceday + pricenight + pot)*0.23;
}

double simple (double day, double night)
{
    double priceday = 0.23770 * (day + day * 0.25);
    double pricenight = 0.23770 * (night + night * 0.25);
    const double pot = 15.903;
    return (priceday + pricenight + pot) + (priceday + pricenight + pot)*0.23;
}

void test(void)
{
    double day;
    double night;
    while(scanf("%lf%lf", &day, &night) != EOF)
    {
        double s = simple(day, night);
        double b = bi_hourly(day, night);
        printf("%.2f %.2f\n", s, b);
    }
}

int main (void)
{
    test();
    return 0;
}