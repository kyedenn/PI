#include <stdio.h>

const char *author = "Pedro Antunes";

int succ(int x);
int pred(int x);
int is_zero(int x);
int is_pos(int x);

int difference(int x, int y)
{
	return is_zero (y) ? x : difference(pred(x), pred (y));

}

int max(int x, int y)

{
    return is_pos(difference (y,x)) ? y : x;
}

int main(void)

{

int x;
int y;
scanf("%d%d", &x, &y);
int z = max(x,y);
printf("%d\n", z);
return 0;

}