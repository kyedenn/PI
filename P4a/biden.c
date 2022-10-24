#include <stdio.h>
#include <math.h>

const char *author = "Pedro Antunes";

int votes(int x)

{
    
    return x>=100 ? votes (x/10)*10 : x;

}

void test_votes(void)

{

    int x;
    while(scanf("%d", &x) != EOF)
    {

        int y= votes(x);
        printf("%d\n", y);
    }
}

int main(void)

{

    test_votes();
    return 0;

}