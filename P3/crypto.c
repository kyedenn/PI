#include <stdio.h>
#include <math.h>

const char *author = "Pedro Antunes";

const double ETH = 1449.87;
const double XMR = 146.78;
const double LTC = 55.86;

double bitcoin (int x, double y)
{
    double w;
    if(x == 1)
    {
        w = y*ETH;
    }
    else if(x == 2)
    {
        w = y*XMR;
    }
    else if(x == 3)
    {
        w = y*LTC;
    }
    return w;
}

double conversion (int x, double y)
{
    return round ((bitcoin(x, y)*1.02)*1000)/1000;
}

void test_bitcoin (void)
{
    int x;
    double y;
    while(scanf("%d%lf", &x, &y) != EOF)
    {
        double p = round(bitcoin (x,y)*100)/100;
        double z = conversion(x, y);
        printf("%.2f\n", p);
        printf("%.3f\n", z);
    }
}

int main (void)
{
    test_bitcoin();
    return 0;
}