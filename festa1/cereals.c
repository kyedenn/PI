#include <stdio.h>
#include <math.h>

const char *author = "Pedro Antunes";

const double LatLisboa = 38.72;
const double LongiLisboa = 9.14;

void aproximate_distance(double lat, double longi)
{
    double distance = sqrt(pow(LatLisboa-lat, 2)+ pow(LongiLisboa-longi, 2))*100;
    if(distance <= 1000)
        {
            double distancecorrect = distance + distance * 0.12;
            printf("%.3f VT %.3f\n", distance, distancecorrect);
        }
    else if(distance > 1000 && distance <= 3000)
        {
            double distancecorrect = distance - distance * 0.25;
            printf("%.3f VA %.3f\n", distance, distancecorrect);
        }
        else
        {
            double distancecorrect = distance + distance * 0.18;
            printf("%.3f VM %.3f\n", distance, distancecorrect);
        }
}

void test(void)
{
    double lat;
    double longi;
    while(scanf("%lf%lf", &lat, &longi) != EOF)
    {
        aproximate_distance(lat, longi);
    }
}

int main (void)
{
    test();
    return 0;
}