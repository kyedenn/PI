#include <stdio.h>
#include <math.h>

const char *author = "Pedro Antunes";

int bluequadrado (int c, int a)
{
    int azuis;
    if(c%2 == 0)
        azuis = c* (c/2-1) + (c/2);
    else if(c%2 != 0)
            azuis = (c+1)* ((c+1)/2-1) + ((c+1)/2);
    return azuis;
}

int yellowquadrado (int c, int a)
{
    int amarelos;
        if(c%2 == 0)
            amarelos = bluequadrado(c, a) + c;
        else if(c%2 != 0)
                amarelos = yellowquadrado (c-1, a-1);    
    return amarelos;
}

int blueretangulo (int c, int a)
{
    double c_a_mais_que_o_a_double = c-a;
    int azulpartequadrada = bluequadrado(a, a);
    int resto;
    if(a%2 == 0)
        resto = (int)(ceil(c_a_mais_que_o_a_double/2)) *a;
    else if(a%2 != 0 )
            resto = (int)(floor(c_a_mais_que_o_a_double/2)) *a;
    return azulpartequadrada+resto;
}

int yellowretangulo (int c, int a)
{
    double c_a_mais_que_o_a_double = c-a;
    int amarelopartequadrada = yellowquadrado(a, a);
    int resto;
    if(a%2 == 0)
        resto = (int)(floor(c_a_mais_que_o_a_double/2)) *a;
    else if(a%2 != 0 )
            resto = (int)(ceil(c_a_mais_que_o_a_double/2)) *a;
    return amarelopartequadrada+resto;
}

void test (void)
{
    int c;
    int a;
    while(scanf("%d%d", &c, &a) != EOF)
    {

        if(c == a)
        {
            int b = bluequadrado(c, a);
            int y = yellowquadrado(c, a);
            printf("%d %d\n", b, y);
        }
        else if(c > a)
                {
                    int b = blueretangulo(c, a);
                    int y = yellowretangulo(c, a);
                    printf("%d %d\n", b, y);
                }       
    }
}

int main (void)
{
    test();
    return 0;
}