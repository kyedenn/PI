#include <stdio.h>

const char *author = "Pedro Antunes";

int succ(int x);
int pred(int x);
int is_zero(int x);
int is_pos(int x);

int sum(int x, int y)
{
	return is_zero(y) ? x : sum(succ(x), pred(y));
}

int twice(int x)
{
    return is_zero(x) ? x : sum((x), (x));
}

int power_of_2(int x)

{

    return is_zero (x) ? 1 : twice(power_of_2(pred(x)));

}

int main(void)

{

int x;
scanf("%d", &x);
int z = power_of_2(x);
printf("%d\n", z);
return 0;

}