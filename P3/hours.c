#include <stdio.h>
#include <math.h>

const char *author = "Pedro Antunes";
const double sub_ref = 6.5;

double vencimento (double x, int y, int z)
{
    double valor;
    double bonus_manhamin = ((x/60)*0.5) * z;
    double bonus_tardemin = ((x/60)*0.75) * z;
    double salario_minutos = (x/60) * z;
    int horasdetrabalho = y - 9;
    double bonus_manha = (x*0.5) * horasdetrabalho;
    double bonus_tarde = (x*0.75) * (horasdetrabalho-5);
    
        if(y>=9 && y<=18)
        {
            if(y<=13)
            {
                valor = x*horasdetrabalho + bonus_manha + salario_minutos + bonus_manhamin;
            }
            else if(y>=14)
            {
                valor = (0.5 * x * 4) + x*(horasdetrabalho-1) + bonus_tarde + salario_minutos + bonus_tardemin + sub_ref;
            }
        }
    return round((valor)*10)/10;
}

/*double vencimento (double x, int y, int z)
{
    int salariominpormin = x/60 ;
    int tempotrabalhomanha = ((y*60) + z) - 540;
    int tempotrabalhotarde = ((y*60) + z) - 840;
    int bonusmanha = ((x/60) * 0.5) * tempotrabalhomanha;
    int bonustarde = ((x/60) * 0.75) * tempotrabalhotarde;
    int sub_ref = 6.5;
    int valormanha;
    int valortarde;

    if (y<=13)
    {
        valormanha = salariomin*tempotrabalhomanha ;
        valortarde = 0;
    }
    else if(y>=14)
        {
            valormanha = salariomin*tempotrabalhomanha + bonusmanha;
            valortarde = salariomin*tempotrabalhotarde + bonustarde + sub_ref;
        }
    return round((valormanha+valortarde) *100)/100;
}*/

void test (void)
{
    double x;
    int y;
    int z;
    while(scanf("%lf%d%d", &x, &y, &z) != EOF)
    {
        double v = vencimento (x, y, z);
        printf("%.6f\n", v);
    }
}

int main (void)
{
    test();
    return 0;
}