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
    printf("%f\n", max);
    return max;
}

double min (double *a, int n)
{
    double min;
    for(int i = 0; i<n; i++)
    {
        if(a[i] <= min)
        {
            min = a[i];
        }
    }
    printf("%f\n", min);
    return min;
}

double diff_max_min (double *a, int n)
{
    return max(a, n)-min(a, n);
}

void test(void)
{
    double a[20];
    int n = ints_get(a);
    double diff = diff_max_min(a, n);
    printf("%f\n", diff);
}

int main (void)
{
    test();
    return 0;
}