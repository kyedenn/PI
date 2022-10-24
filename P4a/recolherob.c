#include <stdio.h>
#include <math.h>

const char *author = "Pedro Antunes";

double multa_auxiliar (int tempo, int multa_por_tempo)

{

    double w= pow(multa_por_tempo, 2)*0.10;
    return tempo<=60 ? w*tempo : w*60+ multa_auxiliar(tempo-60, multa_por_tempo+1);
}

double multa(int a, int b, int c, int d, int x, int y)

{
    int j=a*60+b;
    int p= x*60+y;
    int l= c*60+d;
    if(p-j < l-p)
    {
        return multa_auxiliar((p-j), 1);
    }
    else
    {
        return multa_auxiliar((l-p), 1);
    }
    
}

void test_multa(void)

{
    int a;
    int b;
    int c;
    int d;
    int x;
    int y;
    
    scanf("%d%d%d%d", &a, &b, &c, &d);
    while(scanf("%d%d", &x, &y) != EOF)
    {

        double z= multa(a,b,c,d,x,y);
        printf("%.2f\n", z);
    }
}

int main (void)

{
    test_multa();
    return 0;
}