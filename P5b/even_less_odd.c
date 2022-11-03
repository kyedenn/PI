#include <stdio.h>

const char *author = "Pedro Antunes";

int ints_get(int *a)

{
    int result = 0;
    int x;
    while (scanf("%d", &x) != EOF)
        a[result++] = x;
    return result;
}

int difference_even_and_odd(int *a, int n)
{
    int even = 0;
    int odd = 0;
    for(int i = 0; i<n; i++)
    {
        if(a[i] % 2 == 0)
        {
            even+= a[i];
        }
        else
        {
            odd+= a[i];
        }
    }
    return even-odd;
}

void test(void)
{
    int a[20];
    int n = ints_get(a);
    int diff = difference_even_and_odd(a, n);
    printf("%d\n", diff);
}

int main (void)
{
    test();
    return 0;
}