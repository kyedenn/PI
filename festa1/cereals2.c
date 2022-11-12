#include <stdio.h>
#include <math.h>

const char *author = "Pedro Antunes";

const double LatLisboa = 38.72;
const double LongiLisboa = 9.14;

int wayfunc (double lat, double longi)
{
    double distance = sqrt(pow(LatLisboa-lat, 2)+ pow(LongiLisboa-longi, 2))*100;
    int way;
    if(distance <= 1000)
            way = 1;
    else if(distance > 1000 && distance <= 3000)
            way = 2;
        else
            way = 3;
    return way;
}

double distance (double lat, double longi)
{
    double distance = sqrt(pow(LatLisboa-lat, 2)+ pow(LongiLisboa-longi, 2))*100;
    return distance;
}
double aproximate_distance(double lat, double longi)
{
    double distance = sqrt(pow(LatLisboa-lat, 2)+ pow(LongiLisboa-longi, 2))*100;
    double distancecorrect;
    if(distance <= 1000)
            distancecorrect = distance + distance * 0.12;
    else if(distance > 1000 && distance <= 3000)
            distancecorrect = distance - distance * 0.25;
        else
            distancecorrect = distance + distance * 0.18;
    return distancecorrect;
}

void test(void)
{
    double lat;
    double longi;
    while(scanf("%lf%lf", &lat, &longi) != EOF)
    {
        double d = distance(lat, longi);
        double a = aproximate_distance(lat, longi);
        int way = wayfunc(lat, longi);
        if(way == 1)
            printf("%.3f VT %.3f\n", d, a);
        else if(way == 2)
            printf("%.3f VA %.3f\n", d, a);
            else if(way == 3)
                printf("%.3f VM %.3f\n", d, a);
    }
}

int main (void)
{
    test();
    return 0;
}