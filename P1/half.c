#include <stdio.h>

const char *author = "Pedro Antunes";

int succ(int x);
int pred(int x);
int is_zero(int x);
int is_pos(int x);

int half(int x, int y)

{

    return is_zero (y) ? x: is_pos(y) ? half(pred(x), pred(pred (y))) : x;

}

int half_2(int x)

{

    return half(x,x);

}

int main(void)

{
    int x;
    scanf("%d", &x);
    int z = half_2 (x);
    printf("%d\n", z);
    return 0;
}