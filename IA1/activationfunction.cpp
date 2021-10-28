#include "activationfunction.h"
#include <math.h>


//constant = 1

double sigmond(double v)
{
    double to_return = (1)/(1+ exp(-v));

    return to_return;
}

double linear(double v)
{
    return v;
}
double Step(double v)
{
    if(v<0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
double hypertan(double v)
{
    double to_return= tanh(v);

    return to_return; 
}

//constant!=1

double sigmond(double a, double v)
{
    double to_return = (1)/(1+ exp(-a*v));

    return to_return;
}

double linear(double a,double v)
{
    double to_return = a*v;

    return to_return;
}

double hypertan(double a, double v)
{
    double to_return = (1 - exp(-a*v))/(1 + exp(-a*v));

    return to_return;
}
