#include <stdio.h>

const char *author = "Pedro Antunes";

int ints_get(double *a)

{
    int result = 0;
    double x;
    while (scanf("%lf", &x) != EOF)
        a[result++] = x;
    return result;
}

double max (double *a, int n)
{
    double max;
    for(int i = 0; i<n; i++)
    {
        if(a[i] >= max)
            max = a[i];
    }
    return max;
}

void i_max (double *a, int n)
{
    int i_max;
    double max;
    for(int i = 0; i<n; i++)
    {
        if(a[i] >= max)
        {
            max = a[i];
            i_max = i;
        }
    }
    printf("%d\n", i_max);
}

double min (double *a, int n)
{
    double min;
    for(int i = 0; i<n; i++)
    {
        if(a[i] <= min)
            min = a[i];
    }
    return min;
}

void i_min (double *a, int n)
{
    int i_min;
    double min;
    for(int i = 0; i<n; i++)
    {
        if(a[i] <= min)
        {
            min = a[i];
            i_min = i;
        }
    }
    printf("%d\n", i_min);
}


double sum_max_min (double *a, int n)
{
    return max(a, n)+min(a, n);
}

void test(void)
{
    double a[20];
    int n = ints_get(a);
    double sum = sum_max_min(a, n);
    i_max(a, n);
    i_min(a, n);
    printf("%f\n", sum);
}

int main (void)
{
    test();
    return 0;
}