#include <stdio.h>
#include <math.h>

const char *author = "Pedro Antunes";

int ints_get(int *a)

{
    int result = 0;
    int x;
    while (scanf("%d", &x) != EOF)
        a[result++] = x;
    return result;
}

int points (const int *contests, int n)
{
    int contesttotal = 0;
    int bonus = 0;
    for(int i = 0; i<n/2; i++)
    {
        if(2 * contests[(n/2)+i] >= contests[i])
        {
            contesttotal+= contests[(n/2)+i];
            bonus+=1;
        }
        else
        {
            contesttotal+= contests[(n/2)+i];
        }
    }
    return (contesttotal*3)+bonus;
}

void test(void)
{
    int contests[20];
    int n = ints_get(contests);
    int p = points(contests, n);
    printf("%d\n", p);
}

int main (void)
{
    test();
    return 0;
}