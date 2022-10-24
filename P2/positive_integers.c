#include <stdio.h>

#include <math.h>

const char *author = "Pedro Antunes";

int sum_positive_integers(int x)

{                                                           
    return x == 0 ? x : x + sum_positive_integers(x-1);
}      

void test_sum_positive_integers(void)

{

    int x;      //^                
    while(scanf("%d", &x) != EOF)  
    {                                               

        int y = sum_positive_integers(x);
        printf("%d\n", y);
        
    }
}

double sum_positive_integers_double(double x)

{
    return x == 0.0 ? x : x + sum_positive_integers_double(x-1.0);
}

double avg_positive_integers (int x)

{
    return x == 0 ? 0 : ((x + sum_positive_integers_double(x-1))/x);
}

void test_avg_positive_integers (void)

{
    int x;
    while(scanf("%d", &x) != EOF)
    {
        double y = avg_positive_integers (x);
        printf("%f\n", y);
    }
}


int sum_multiples(int x, int y)

{
    return y == 0 ? 0: x * sum_positive_integers(y-1);
}
void test_sum_multiples(void)

{

    int x;
    int y;
    while(scanf("%d%d", &x, &y) != EOF)
    {

        int z= sum_multiples(x,y);
        printf("%d\n", z);
    }
}

int sum_progression(int x, int y, int z)

{

    return ((sum_multiples(y,z)) + x*z);

}

void test_sum_progression(void)

{

    int x;
    int y;
    int z;
    while(scanf("%d%d%d", &x, &y, &z) != EOF)
    {

        int w= sum_progression(x,y,z);
        printf("%d\n", w);
    }
}

double sum_progression_dbl(double x, double y, int z)

{

    return z == 0 ? 0 : x+ sum_progression_dbl(x+y,y,z-1);
}

void test_sum_progression_dbl(void)

{

    double x;
    double y;
    int z;
    while(scanf("%lf%lf%d", &x, &y, &z) !=EOF)
    {

        double w= sum_progression_dbl(x,y,z);
        printf("%f\n", w);
    }
}

double sum_squares_from(double x, int y)

{

    return y == 0 ? 0 : (x*x) + sum_squares_from(x+1,y-1);

}

void test_sum_squares_from(void)

{

    double x;
    int y;

    while(scanf("%lf%d", &x, &y) != EOF)
    {

        double w= sum_squares_from(x,y);
        printf("%f\n", w);

    }

}

double sum_powers_from(double x, double z, int y)
{

    return y==0 ? 0 : pow(x,z) + sum_powers_from(x+1,z,y-1);
    
}

void test_sum_powers_from(void)

{

    double x;
    double z;
    int y;
    while(scanf("%lf%lf%d", &x, &z, &y) != EOF)
    {

        double w= sum_powers_from(x,z,y);
        printf("%f\n", w);

    }
}

 
double sum_inverses(int x)

{

    return sum_powers_from(1, -1, x);

}

void test_sum_inverses(void)

{

    int x;
    while(scanf("%d", &x) != EOF)
    {

        double z= sum_inverses(x);
        printf("%f\n", z);
    }
}


double sum_inverse_squares(int x)

{

    return sum_powers_from(1,-2, x);

}

void test_sum_inverse_squares(void)

{

    int x;
    while(scanf("%d", &x) != EOF)
    {

        double w= sum_inverse_squares(x);
        printf("%f\n", w);

    }
}

int main(void)

{
    test_sum_positive_integers();
    return 0;
}