#include <stdio.h>

const char *author = "Pedro Antunes";

double speed_taxes_in (double limit, double given)
{
    double value;
    double dif = given - limit;
    double var = 1 + (0.25 * dif) / 10;
    if(limit != given && dif <= 20)
    {    
        value = (limit/given + var) * 60;
        value > 300 ? value = 300 : value;
    }
    else if(limit != given && dif >=21 && dif <=40)
        {
            value = (limit/given + var) * 120;
            value > 600 ? value = 600 : value;
        }
        else if(limit != given && dif >=41 && dif <=60)
            {
                value = (limit/given + var) * 300;
                value > 1500 ? value = 1500 : value;
            }
            else if (limit != given && dif > 60)
                {
                    value = (limit/given + var) * 500;
                    value > 2500 ? value = 2500 : value;
                }
                else
                    value = 0;
    return value;
}
double speed_taxes_out (double limit, double given)
{
    double value;
    double dif = given - limit;
    double var = 1 + (0.25 * dif) / 10;
    if(limit != given && dif <= 30)
    {    
        value = (limit/given + var) * 60;
        value > 300 ? value = 300 : value;
    }
    else if(limit != given && dif >=31 && dif <=60)
        {
            value = (limit/given + var) * 120;
            value > 600 ? value = 600 : value;
        }
        else if(limit != given && dif >=61 && dif <=80)
            {
                value = (limit/given + var) * 300;
                value > 1500 ? value = 1500 : value;
            }
            else if (limit != given && dif > 80)
                {
                    value = (limit/given + var) * 500;
                    value > 2500 ? value = 2500 : value;
                }
                else
                    value = 0;
    return value;
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
            s = speed_taxes_in(limit, given);
        else if (o == 1)
                s = speed_taxes_out(limit, given);
        printf("%.2f\n", s);
    }
}

int main (void)
{
    test();
    return 0;
}
