#include <stdio.h>
#include <math.h>

const char *author = "Pedro Antunes";

double preco_por_litro(double x, double y, int z)

{

    return round (((((0.80 * x) * (z-(z/3))) / (y*z)))*100)/100;

}

void test_preco_por_litro(void)

{

    double x;
    double y;
    int z;
    while(scanf("%lf%lf%d", &x, &y, &z) != EOF)
    {

        double w= preco_por_litro(x,y,z);
        printf("%f\n", w);

    }
}

int main(void)

{
    test_preco_por_litro();
    return 0;
}