#include <stdio.h>

const char *author = "Pedro Antunes";

double tax (double limit, double given, int min, int max)
{
    double dif = given - limit;
    double var = 1 + (0.25 * dif) / 10;
    double tax = (limit/given + var) * min;
    double value;
    if(dif == 0)
        value = 0;
    else if(tax>max)
            value = max;
        else
        value = tax;
    return value;
}

double speed_in_1 (double limit, double given)
{
    double dif = given - limit;
    int min;
    int max;

    if(dif <= 20)
    {
        min = 60;
        max = 300;
    }
    else if(dif > 20 && dif <= 40)
        {
            min = 120;
            max = 600;
        }
        else
        {
            min = 300;
            max = 1500;
        }
    return tax(limit, given, min, max);
}

double speed_in_60 (double limit, double given)
{
    double dif = given - limit;
    int min = 500;
    int max = 2500;
    return dif <= 60 ? speed_in_1(limit, given) : tax(limit, given, min, max);
}

double speed_out_1 (double limit, double given)
{
    double dif = given - limit;
    int min;
    int max;

    if(dif <= 30)
    {
        min = 60;
        max = 300;
    }
    else if(dif > 30 && dif <= 60)
        {
            min = 120;
            max = 600;
        }
        else
        {
            min = 300;
            max = 1500;
        }
    return tax(limit, given, min, max);
}

double speed_out_80 (double limit, double given)
{
    double dif = given - limit;
    int min = 500;
    int max = 2500;
    return dif <= 80 ? speed_out_1 (limit, given) : tax(limit, given, min, max);
}

void test(void)
{
    double limit;
    double given;
    int o;
    while(scanf("%lf%lf%d", &limit, &given, &o) != EOF)
    {
        double s;
        if(o == 0)
            s = speed_in_60(limit, given);
        else if (o == 1)
                s = speed_out_80(limit, given);
        printf("%.2f\n", s);
    }
}

int main (void)
{
    test();
    return 0;
}
