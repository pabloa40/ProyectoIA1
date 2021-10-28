#ifndef ActivationF_H
#define ActivationF_H

//hardlimit treshold on 0

double step(double v);

//constant = 1

double sigmond(double v);
double linear(double v);

double hypertan(double v);

//constant = a

double sigmond(double a, double v);
double linear(double a,double v);
double hypertan(double a, double v);

#endif