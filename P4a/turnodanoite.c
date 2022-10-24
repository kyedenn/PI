#include <stdio.h>
#include <math.h>

const char *author = "Pedro Antunes";

double salario_por_dia_de_trabalho(double x, int y, int z)

{
    int s= 60*(y-18)+z;
     return y<=20 ? round (((x*s)/60)*100)/100 : round (((x*120)/60+(((s-120)*x)*1.5)/60)*100)/100;

}

void test_salario_por_dia_de_trabalho (void)

{

    double x;
    int y;
    int z;
    while(scanf("%lf%d%d", &x, &y, &z) != EOF)
    {

        double w= salario_por_dia_de_trabalho(x,y,z);
        printf("%f\n", w);

    }
}

int main (void)

{

    test_salario_por_dia_de_trabalho();
    return 0;

}