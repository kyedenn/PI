//Sum, elementary; recursive.

#include <stdio.h>

const char *author = "Pedro Antunes";

int succ(int x);
int pred(int y);
int is_zero(int x);
int is_pos(int x);

int sum(int x, int y)
{
	return is_zero(y) ? x : sum(succ(x), pred(y));
}

int main(void)
{
	int x;
	int y;
	scanf("%d%d", &x,&y);
	int z = sum(x, y);
	printf("%d\n", z);
	return 0;
}