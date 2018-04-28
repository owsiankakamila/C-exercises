#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

double fahrToCelsius(double f);


int main()
{
    double fahr;
    for(fahr=LOWER;fahr<=UPPER;fahr=fahr+STEP)
    {
        printf("%5.1lf %8.1lf\n",fahr,fahrToCelsius(fahr));
    }


    return 0;
}

double fahrToCelsius(double f)
{
    return (5.0/9.0)*(f-32.0);
}
